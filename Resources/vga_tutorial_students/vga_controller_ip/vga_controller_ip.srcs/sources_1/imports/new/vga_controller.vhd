library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
----------------------------------------------------------------------------------

-- Created by: Zavier Aguila 

-- Create Date: 01/20/2018 01:43:19 PM 
-- Module Name: vga_controller - Behavioral
-- Additional Comments:";
-- 
----------------------------------------------------------------------------------




entity vga_controller is
    generic(
    image_buffer1_baseaddr: std_logic_vector (31 downto 0) :=  X"00000000";
    image_buffer2_baseaddr: std_logic_vector (31 downto 0):=  X"010E9001";

    horizontal_length : integer ;
    vertical_length : integer ;
    h_front_porch : integer ;
    h_sync_pulse : integer ;
    h_back_porch : integer ;
    v_front_porch : integer ;
    v_sync_pulse : integer ;
    v_back_porch : integer ;
    h_sync_polarity : std_logic := '0';
    v_sync_polarity : std_logic := '0'
    );

    port(
           --switch_buffer_en: in std_logic;

           VGA_R : out STD_LOGIC_VECTOR (3 downto 0);
           VGA_G : out STD_LOGIC_VECTOR (3 downto 0);
           VGA_B : out STD_LOGIC_VECTOR (3 downto 0);
           VGA_HS : out STD_LOGIC;
           VGA_VS : out STD_LOGIC;
           clk : in STD_LOGIC;
           pixel_clk: in STD_LOGIC;
           rstn : in STD_LOGIC;
           pixel_rstn: in STD_LOGIC;
           fifo_rst: in STD_LOGIC;
           rfifo_count: in STD_LOGIC_VECTOR (7 DOWNTO 0);
           switch_buffer: in std_logic;
           switch_buffer_ack: out std_logic;
           M_AXI_AWID          :   out std_logic_vector(2 DOWNTO 0);
           M_AXI_AWADDR        :   out std_logic_vector(31 downto 0);
           M_AXI_AWLEN         :   out std_logic_vector(3 downto 0);
           M_AXI_AWSIZE        :   out std_logic_vector(2 downto 0);
           M_AXI_AWBURST       :   out std_logic_vector(1 downto 0);
           M_AXI_AWLOCK        :   out std_logic_vector(1 downto 0);
           M_AXI_AWCACHE       :   out std_logic_vector(3 downto 0);
           M_AXI_AWPROT        :   out std_logic_vector(2 downto 0);
           M_AXI_AWQOS         :   out std_logic_vector(3 downto 0);
           M_AXI_AWUSER        :   out std_logic_vector(4 downto 0);
           M_AXI_AWVALID       :   out std_logic;
           M_AXI_AWREADY       :   in  std_logic;
                   -- Write data channel s        
           M_AXI_WID           :   out std_logic_vector(5 downto 0);
           M_AXI_WDATA         :   out std_logic_vector(63 downto 0);
           M_AXI_WSTRB         :   out std_logic_vector(7 downto 0);
           M_AXI_WLAST         :   out std_logic;
           M_AXI_WVALID        :   out std_logic;
           M_AXI_WREADY        :   in  std_logic;
                   --  Write response channel signals
           M_AXI_BID           :   in  std_logic_vector(2 downto 0);
           M_AXI_BRESP         :   in  std_logic_vector(1 downto 0);
           M_AXI_BVALID        :   in  std_logic;
           M_AXI_BREADY        :   out std_logic;
                   --  Read address channel signals
           M_AXI_ARID          :   out std_logic_vector(2 downto 0);
           M_AXI_ARADDR        :   out std_logic_vector(31 downto 0);
           M_AXI_ARLEN         :   out std_logic_vector(3 downto 0);
           M_AXI_ARSIZE        :   out std_logic_vector(2 downto 0);
           M_AXI_ARBURST       :   out std_logic_vector(1 downto 0);
           M_AXI_ARLOCK        :   out std_logic_vector(1 downto 0);
           M_AXI_ARCACHE       :   out std_logic_vector(3 downto 0);
           M_AXI_ARPROT        :   out std_logic_vector(2 downto 0);
           M_AXI_ARQOS         :   out std_logic_vector(3 downto 0);
           M_AXI_ARUSER        :   out std_logic_vector(4 downto 0);
           M_AXI_ARVALID       :   out std_logic;
           M_AXI_ARREADY       :   in  std_logic;
                   -- Read data channel signals
           M_AXI_RID           :   in  std_logic_vector(2 downto 0);
           M_AXI_RDATA         :   in  std_logic_vector(63 downto 0);
           M_AXI_RRESP         :   in  std_logic_vector(1 downto 0);
           M_AXI_RLAST         :   in  std_logic;
           M_AXI_RVALID        :   in  std_logic;
           M_AXI_RREADY        :   out std_logic
            );
end vga_controller;

architecture Behavioral of vga_controller is
constant AXI_burst_length : integer := 16; 
constant image_buffer_size: integer:= horizontal_length*vertical_length*32;
constant step_size: integer:= AXI_burst_length*8; --64 has 2 words(32 each)
constant max_addr1: integer := to_integer(unsigned(image_buffer1_baseaddr)) + (horizontal_length*vertical_length)*4-128; --try to remove the 128 and make it depend on something else
constant max_addr2: integer := to_integer(unsigned(image_buffer2_baseaddr)) + (horizontal_length*vertical_length)*4-128;
signal h_sync_pol : std_logic:= h_sync_polarity;
signal v_sync_pol : std_logic:= v_sync_polarity;
--signal d_in : std_logic_vector(AXI_burst_size-1 downto 0);
signal d_out : std_logic_vector(31 downto 0);
signal fifo_write: std_logic;
signal fifo_read: std_logic;
signal fifo_full : std_logic;
signal fifo_almost_full : std_logic;
signal fifo_empty: std_logic;
signal h_count: integer range 0 to horizontal_length +  h_front_porch + h_sync_pulse + h_back_porch -1;
signal v_count: integer range 0 to vertical_length +  v_front_porch + v_sync_pulse + v_back_porch -1;
signal h_count_en : std_logic;
signal v_count_en : std_logic;

signal fifo_read_en : std_logic;
signal h_fifo_read_en : std_logic;
signal v_fifo_read_en : std_logic;

signal rd_addr1_reg : integer;
signal rd_addr2 : integer;
signal burst_count : integer range 0 to AXI_burst_length;
signal rd_addr1_en : std_logic;
signal rd_addr2_en : std_logic;
signal rdata_reg: std_logic_vector(63 downto 0);
signal wr_en_reg : std_logic;
signal ARVALID_reg: std_logic;
signal fifo_rst_sig: std_logic;
signal rready : std_logic;

signal prog_full: std_logic;
signal flush_addr:std_logic_vector (31 downto 0);
signal flush_arvalid: std_logic;
signal flush_rready: std_logic;
signal flush_count: STD_LOGIC_VECTOR (7 DOWNTO 0);
signal flush_done: std_logic :='1';

signal flush_addr_next:std_logic_vector (31 downto 0);
signal flush_arvalid_next: std_logic;
signal flush_rready_next: std_logic;
signal flush_count_next: STD_LOGIC_VECTOR (7 DOWNTO 0);
signal flush_done_next: std_logic;

signal rd_addr_reg: integer;
signal rd_addr_count: std_logic;
signal old_base_addr: integer := to_integer(unsigned(image_buffer2_baseaddr));
signal current_base_addr: integer:= to_integer(unsigned(image_buffer1_baseaddr));
signal old_max_addr: integer := to_integer(unsigned(image_buffer2_baseaddr)) + (horizontal_length*vertical_length)*4-128;
signal current_max_addr: integer:= to_integer(unsigned(image_buffer1_baseaddr)) + (horizontal_length*vertical_length)*4-128;
signal switch_buffer_reg1, switch_buffer_reg2, switch_buffer_reg_out: std_logic;
signal switch_buffer_ack_reg:std_logic;
type state_type is (st1_rst,st2_sendreq,st3_obtain_datacount, st4_rvalid,st5_done);
signal state, next_state : state_type;

component fifo_generator_0
  PORT (
    rst : IN STD_LOGIC;
    wr_clk : IN STD_LOGIC;
    rd_clk : IN STD_LOGIC;
    din : IN STD_LOGIC_VECTOR(63 DOWNTO 0);
    wr_en : IN STD_LOGIC;
    rd_en : IN STD_LOGIC;
    dout : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    full : OUT STD_LOGIC;
    almost_full : OUT STD_LOGIC;
    empty : OUT STD_LOGIC;
    prog_full: out STD_LOGIC
  ); 
end component;
begin

M_AXI_ARLEN <= std_logic_vector(to_unsigned(AXI_burst_length-1,4));
M_AXI_ARSIZE <= "011";
M_AXI_ARBURST <= "01";
M_AXI_ARCACHE <= "0011";
M_AXI_ARPROT<= "000";
M_AXI_ARID <= "000";
 ----------------------------------------------- AXI Data Side ---------------------------------------------------
 --Logic for intial HP Port Flush---------------------------------------------------------------------------------
process (clk,rstn)
    begin
        if (rising_edge(clk)) then
            if (rstn = '0') then
                state <= st1_rst;
            else
                state <= next_state;
                flush_addr <= flush_addr_next;
                flush_arvalid <= flush_arvalid_next ;
                flush_rready<= flush_rready_next;
                flush_count<= flush_count_next;
                flush_done<= flush_done_next;
            end if;
       end if;
end process;
 
process (state)
begin
    case state is
    when st1_rst =>
        flush_addr_next <= image_buffer1_baseaddr;
        flush_arvalid_next <= '0';
        flush_rready_next <= '0';
        flush_count_next <= (others => '0');
        flush_done_next <= '0';
    when st2_sendreq =>
        flush_addr_next <= image_buffer1_baseaddr;
        flush_arvalid_next <= '1';
        flush_rready_next <= '0';
        flush_count_next <= (others => '0');
        flush_done_next <= '0';        
    when st3_obtain_datacount=>
        flush_addr_next <= image_buffer1_baseaddr;
        flush_arvalid_next <= '0';
        flush_rready_next <= '0';
        flush_count_next <= rfifo_count;
        flush_done_next <= '0';           
    when st4_rvalid=>
        flush_addr_next <= image_buffer1_baseaddr;
        flush_arvalid_next <= '0';
        flush_rready_next <= '1';
        flush_count_next <= std_logic_vector(unsigned(rfifo_count) - 1);
        flush_done_next <= '0'; 
    when st5_done=>
        flush_addr_next <= image_buffer1_baseaddr;
        flush_arvalid_next <= '0';
        flush_rready_next <= '0';
        flush_count_next <= rfifo_count;
        flush_done_next <= '1'; 
    end case;
    end process;
 
process (state)
begin
    next_state <= state;  
    case state is
    when st1_rst =>
        next_state <= st2_sendreq;
    when st2_sendreq =>
        if(M_AXI_ARREADY = '1') then
            next_state <= st3_obtain_datacount;
        elsif (rfifo_count /= "00000000") then 
            next_state <= st3_obtain_datacount;
        end if;    
    when st3_obtain_datacount =>
        if(rfifo_count /= "00000000") then
                next_state <= st4_rvalid;
        end if;        
    when st4_rvalid=>
        if(rfifo_count = "00000000" AND M_AXI_RVALID = '0') then
            next_state <= st5_done;
        end if;
    when st5_done=>
        next_state <= st5_done;
    end case;
    end process;
 
                 
             
--Logic for Data Reuqest------------------------------------------------------------------------------------------
 process(clk,rstn)
 begin
 if(rising_edge(clk)) then
    if(rstn = '0') then
        switch_buffer_reg1 <= '0';
        switch_buffer_reg2 <= '0';
        switch_buffer_reg_out <= '0';
    else
        switch_buffer_reg1 <= switch_buffer;
        switch_buffer_reg2 <= switch_buffer_reg1;
        switch_buffer_reg_out <= switch_buffer_reg2;
    end if;
 end if;
 end process;
 
 process( switch_buffer_reg_out,switch_buffer_reg2)
 begin
 if(switch_buffer_reg_out = '0' AND switch_buffer_reg2 = '1') then
    rd_addr_count <= '1';
elsif(switch_buffer_reg_out = '1' AND switch_buffer_reg2 = '1') then
    rd_addr_count <= '1';
 else
    rd_addr_count <= '0';
end if;
 end process;
 
--Read Data Request Logic
 process(clk, rstn)
 begin
 if(rising_edge(clk)) then
     if(rstn = '0' OR flush_done = '0') then
         rd_addr_reg <= max_addr1; 
         ARVALID_reg <= '0';
         current_base_addr <= to_integer(unsigned(image_buffer1_baseaddr));
         old_base_addr <= to_integer(unsigned(image_buffer2_baseaddr));
         current_max_addr <= max_addr1;
         old_max_addr <= max_addr2;
          switch_buffer_ack_reg <= '0';
     else
        ARVALID_reg <= '1';
        current_base_addr <= current_base_addr;
        old_base_addr <= old_base_addr;
        current_max_addr <= current_max_addr;
        old_max_addr <= old_max_addr;
        if(switch_buffer_reg_out = '1') then
            switch_buffer_ack_reg <= switch_buffer_ack_reg;
        else
            switch_buffer_ack_reg <= '0';
        end if;        
        if( M_AXI_ARREADY = '0') then 
             rd_addr_reg <= rd_addr_reg;     
        elsif(rd_addr_reg < current_max_addr) then 
             rd_addr_reg <= rd_addr_reg + step_size;
        else --Done with 1 frame
            if(rd_addr_count = '1'  AND switch_buffer_ack_reg = '0') then
                rd_addr_reg <= old_base_addr;
                current_base_addr <= old_base_addr;
                old_base_addr <= current_base_addr;
                current_max_addr <= old_max_addr;
                old_max_addr <= current_max_addr;
            else
                rd_addr_reg <= current_base_addr;
            end if;            
            if(switch_buffer_reg_out = '1') then
                switch_buffer_ack_reg <= '1';
            end if;
         end if;               
      end if;        
 end if;
 end process;
 
switch_buffer_ack <= switch_buffer_ack_reg;

 M_AXI_ARADDR <= std_logic_vector(to_unsigned(rd_addr_reg,32));

process(flush_done)
begin
if(flush_done = '1') then
    M_AXI_ARVALID <= ARVALID_reg;
    M_AXI_RREADY <= rready;
else
    M_AXI_ARVALID <= flush_arvalid;
    M_AXI_RREADY  <= flush_rready;  
end if;
end process;

process(clk)
 begin
 if(rising_edge(clk)) then
rdata_reg(31 downto 0) <= M_AXI_RDATA(63 downto 32);
rdata_reg(63 downto 32) <=   M_AXI_RDATA(31 downto 0);
     if(rstn = '0' OR flush_done = '0') then
        wr_en_reg <= '0';
        rready <= '0'; 

     else
       wr_en_reg <= M_AXI_RVALID and rready;
        if(prog_full = '1') then
            rready <= '0';
        else
            rready <= '1';
        end if;   
     end if;
 end if;
 end process;
 
--fifo_rst_sig <= NOT pixel_rstn OR NOT rstn;
--Logic for Data Received------------------------------------------------------------------------------------------
fifo : fifo_generator_0 port map (
    rst => fifo_rst,
    wr_clk => clk,
    rd_clk => pixel_clk,
    din  => rdata_reg,
    wr_en => wr_en_reg,
    rd_en => fifo_read_en,
    dout => d_out,
    full => fifo_full,
    almost_full => fifo_almost_full,
    empty => fifo_empty,
    prog_full => prog_full
    );
------------------------------------------------ VGA Side -----------------------------------------------------------

--h_counter
process(pixel_clk, pixel_rstn)
begin 
if(rising_edge(pixel_clk)) then
    if(pixel_rstn = '0') then
        h_count <= horizontal_length;
    else
        if(fifo_empty= '1') then
            h_count <= h_count;
        elsif(h_count < (horizontal_length +  h_front_porch + h_sync_pulse + h_back_porch - 1)) then --h_count_en = 1
            h_count <= h_count + 1;
        else  --h_count_en = 1 AND h_count = 1 line of data + porches
            h_count <= 0;
        end if;        
    end if;
end if;
end process;

process(h_count)
begin
if( h_count = horizontal_length + h_front_porch + h_sync_pulse + h_back_porch -1 ) then
    v_count_en <= '1';
else
    v_count_en <= '0';
end if;
end process;
--fifo read control || H-Sync
process(h_count)
begin
        --if (fifo_empty = '0') then
            if(h_count < horizontal_length) then
                VGA_R  <= d_out(7 downto 4);
                VGA_G  <= d_out(15 downto 12);
                VGA_B  <= d_out(23 downto 20);
                h_fifo_read_en <= '1';
            elsif(h_count < horizontal_length +  h_front_porch) then
                VGA_R  <= "0000";
                VGA_G  <= "0000";
                VGA_B  <= "0000";
                h_fifo_read_en <= '0';
            elsif(h_count < horizontal_length +  h_front_porch + h_sync_pulse) then
                VGA_R  <= "0000";
                VGA_G  <= "0000";
                VGA_B  <= "0000";
                h_fifo_read_en <= '0';
            elsif(h_count < horizontal_length +  h_front_porch + h_sync_pulse + h_back_porch) then
                VGA_R  <= "0000";
                VGA_G  <= "0000";
                VGA_B  <= "0000";
                h_fifo_read_en <= '0';
            else
                VGA_R  <= "0000";
                VGA_G  <= "0000";
                VGA_B  <= "0000";
                h_fifo_read_en <= '0';
        end if;        
end process;

--v_counter
process(pixel_clk, pixel_rstn)
begin 
if(rising_edge(pixel_clk)) then
    if(pixel_rstn = '0') then --reset
        v_count <= vertical_length;
    else
        if(v_count_en = '0') then
            v_count <= v_count;
        elsif(v_count < (vertical_length +  v_front_porch + v_sync_pulse + v_back_porch-1)) then 
            v_count <= v_count + 1;
        else 
            v_count <= 0;
        end if;        
    end if;
end if;
end process;
--fifo read logic || V_Sync
process(v_count)
begin
if(v_count < vertical_length) then
    v_fifo_read_en  <= '1';
elsif(v_count < vertical_length +  v_front_porch) then
    v_fifo_read_en  <= '0';
elsif(v_count < vertical_length +  v_front_porch + v_sync_pulse) then
    v_fifo_read_en  <= '0';
elsif(v_count < vertical_length +  v_front_porch + v_sync_pulse + v_back_porch) then
    v_fifo_read_en  <= '0';
else
    v_fifo_read_en  <= '0';
end if;
end process;

process(v_fifo_read_en,h_fifo_read_en)
begin
fifo_read_en <= v_fifo_read_en AND h_fifo_read_en and (NOT fifo_empty) and (pixel_rstn);
end process;
--H-Sync and V-Sync control signals
process(v_count, h_count)
begin
        if(v_count > vertical_length + v_front_porch -1 AND v_count < vertical_length + v_front_porch + v_sync_pulse)then
            VGA_VS <=  v_sync_polarity;
        else 
            VGA_VS <= NOT v_sync_polarity;
        end if;
        if( h_count > horizontal_length + h_front_porch -1 AND h_count < horizontal_length + h_front_porch + h_sync_pulse) then
            VGA_HS <=  h_sync_polarity; 
        else 
            VGA_HS <= NOT h_sync_polarity;
        end if;
--end if;
end process;

end Behavioral;
