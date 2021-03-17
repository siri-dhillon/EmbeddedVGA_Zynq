//Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
//Date        : Wed Mar 17 02:06:12 2021
//Host        : DESKTOP-S0HONA0 running 64-bit major release  (build 9200)
//Command     : generate_target vgaSystem.bd
//Design      : vgaSystem
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "vgaSystem,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=vgaSystem,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=9,numReposBlks=9,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=1,numPkgbdBlks=0,bdsource=USER,da_board_cnt=2,da_clkrst_cnt=2,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "vgaSystem.hwdef" *) 
module vgaSystem
   (VGA_B,
    VGA_G,
    VGA_R,
    reset,
    sys_clock,
    vid_hsync_0,
    vid_vsync_0);
  output [3:0]VGA_B;
  output [3:0]VGA_G;
  output [3:0]VGA_R;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.RESET RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.RESET, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input reset;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.SYS_CLOCK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.SYS_CLOCK, CLK_DOMAIN vgaSystem_sys_clock, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.000" *) input sys_clock;
  output vid_hsync_0;
  output vid_vsync_0;

  wire clk_wiz_0_clk_out1;
  wire [23:0]dataGen_0_o_data;
  wire dataGen_0_o_data_valid;
  wire dataGen_0_o_eol;
  wire dataGen_0_o_sof;
  wire reset_rtl_1;
  wire [0:0]rst_clk_wiz_0_148M_peripheral_aresetn;
  wire sys_clock_1;
  wire v_axi4s_vid_out_0_s_axis_video_tready;
  wire [23:0]v_axi4s_vid_out_0_vid_data;
  wire v_axi4s_vid_out_0_vid_hsync;
  wire v_axi4s_vid_out_0_vid_vsync;
  wire v_axi4s_vid_out_0_vtg_ce;
  wire v_tc_0_vtiming_out_ACTIVE_VIDEO;
  wire v_tc_0_vtiming_out_HBLANK;
  wire v_tc_0_vtiming_out_HSYNC;
  wire v_tc_0_vtiming_out_VBLANK;
  wire v_tc_0_vtiming_out_VSYNC;
  wire [0:0]xlconstant_0_dout;
  wire [3:0]xlslice_0_Dout;
  wire [3:0]xlslice_1_Dout;
  wire [3:0]xlslice_2_Dout;

  assign VGA_B[3:0] = xlslice_2_Dout;
  assign VGA_G[3:0] = xlslice_1_Dout;
  assign VGA_R[3:0] = xlslice_0_Dout;
  assign reset_rtl_1 = reset;
  assign sys_clock_1 = sys_clock;
  assign vid_hsync_0 = v_axi4s_vid_out_0_vid_hsync;
  assign vid_vsync_0 = v_axi4s_vid_out_0_vid_vsync;
  vgaSystem_clk_wiz_0_0 clk_wiz_0
       (.clk_in1(sys_clock_1),
        .clk_out1(clk_wiz_0_clk_out1));
  vgaSystem_dataGen_0_0 dataGen_0
       (.i_clk(clk_wiz_0_clk_out1),
        .i_data_ready(v_axi4s_vid_out_0_s_axis_video_tready),
        .i_reset_n(rst_clk_wiz_0_148M_peripheral_aresetn),
        .o_data(dataGen_0_o_data),
        .o_data_valid(dataGen_0_o_data_valid),
        .o_eol(dataGen_0_o_eol),
        .o_sof(dataGen_0_o_sof));
  vgaSystem_rst_clk_wiz_0_148M_0 rst_clk_wiz_0_148M
       (.aux_reset_in(1'b1),
        .dcm_locked(1'b1),
        .ext_reset_in(reset_rtl_1),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(rst_clk_wiz_0_148M_peripheral_aresetn),
        .slowest_sync_clk(clk_wiz_0_clk_out1));
  vgaSystem_v_axi4s_vid_out_0_0 v_axi4s_vid_out_0
       (.aclk(clk_wiz_0_clk_out1),
        .aclken(xlconstant_0_dout),
        .aresetn(rst_clk_wiz_0_148M_peripheral_aresetn),
        .fid(1'b0),
        .s_axis_video_tdata(dataGen_0_o_data),
        .s_axis_video_tlast(dataGen_0_o_eol),
        .s_axis_video_tready(v_axi4s_vid_out_0_s_axis_video_tready),
        .s_axis_video_tuser(dataGen_0_o_sof),
        .s_axis_video_tvalid(dataGen_0_o_data_valid),
        .vid_data(v_axi4s_vid_out_0_vid_data),
        .vid_hsync(v_axi4s_vid_out_0_vid_hsync),
        .vid_io_out_ce(xlconstant_0_dout),
        .vid_vsync(v_axi4s_vid_out_0_vid_vsync),
        .vtg_active_video(v_tc_0_vtiming_out_ACTIVE_VIDEO),
        .vtg_ce(v_axi4s_vid_out_0_vtg_ce),
        .vtg_field_id(1'b0),
        .vtg_hblank(v_tc_0_vtiming_out_HBLANK),
        .vtg_hsync(v_tc_0_vtiming_out_HSYNC),
        .vtg_vblank(v_tc_0_vtiming_out_VBLANK),
        .vtg_vsync(v_tc_0_vtiming_out_VSYNC));
  vgaSystem_v_tc_0_0 v_tc_0
       (.active_video_out(v_tc_0_vtiming_out_ACTIVE_VIDEO),
        .clk(clk_wiz_0_clk_out1),
        .clken(xlconstant_0_dout),
        .gen_clken(v_axi4s_vid_out_0_vtg_ce),
        .hblank_out(v_tc_0_vtiming_out_HBLANK),
        .hsync_out(v_tc_0_vtiming_out_HSYNC),
        .resetn(rst_clk_wiz_0_148M_peripheral_aresetn),
        .sof_state(1'b0),
        .vblank_out(v_tc_0_vtiming_out_VBLANK),
        .vsync_out(v_tc_0_vtiming_out_VSYNC));
  vgaSystem_xlconstant_0_0 xlconstant_0
       (.dout(xlconstant_0_dout));
  vgaSystem_xlslice_0_0 xlslice_0
       (.Din(v_axi4s_vid_out_0_vid_data),
        .Dout(xlslice_0_Dout));
  vgaSystem_xlslice_0_1 xlslice_1
       (.Din(v_axi4s_vid_out_0_vid_data),
        .Dout(xlslice_1_Dout));
  vgaSystem_xlslice_1_0 xlslice_2
       (.Din(v_axi4s_vid_out_0_vid_data),
        .Dout(xlslice_2_Dout));
endmodule
