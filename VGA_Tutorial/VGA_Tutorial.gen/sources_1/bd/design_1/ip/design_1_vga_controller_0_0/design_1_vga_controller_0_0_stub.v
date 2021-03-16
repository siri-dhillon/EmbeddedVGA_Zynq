// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
// Date        : Wed Feb 24 16:13:38 2021
// Host        : DESKTOP-S0HONA0 running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub {c:/Users/Sirpreet
//               Dhillon/Documents/GitHub/missile_command/VGA_Tutorial/VGA_Tutorial.gen/sources_1/bd/design_1/ip/design_1_vga_controller_0_0/design_1_vga_controller_0_0_stub.v}
// Design      : design_1_vga_controller_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "vga_controller,Vivado 2020.2" *)
module design_1_vga_controller_0_0(VGA_R, VGA_G, VGA_B, VGA_HS, VGA_VS, clk, pixel_clk, 
  rstn, pixel_rstn, fifo_rst, rfifo_count, switch_buffer, switch_buffer_ack, M_AXI_AWID, 
  M_AXI_AWADDR, M_AXI_AWLEN, M_AXI_AWSIZE, M_AXI_AWBURST, M_AXI_AWLOCK, M_AXI_AWCACHE, 
  M_AXI_AWPROT, M_AXI_AWQOS, M_AXI_AWUSER, M_AXI_AWVALID, M_AXI_AWREADY, M_AXI_WID, 
  M_AXI_WDATA, M_AXI_WSTRB, M_AXI_WLAST, M_AXI_WVALID, M_AXI_WREADY, M_AXI_BID, M_AXI_BRESP, 
  M_AXI_BVALID, M_AXI_BREADY, M_AXI_ARID, M_AXI_ARADDR, M_AXI_ARLEN, M_AXI_ARSIZE, 
  M_AXI_ARBURST, M_AXI_ARLOCK, M_AXI_ARCACHE, M_AXI_ARPROT, M_AXI_ARQOS, M_AXI_ARUSER, 
  M_AXI_ARVALID, M_AXI_ARREADY, M_AXI_RID, M_AXI_RDATA, M_AXI_RRESP, M_AXI_RLAST, M_AXI_RVALID, 
  M_AXI_RREADY)
/* synthesis syn_black_box black_box_pad_pin="VGA_R[3:0],VGA_G[3:0],VGA_B[3:0],VGA_HS,VGA_VS,clk,pixel_clk,rstn,pixel_rstn,fifo_rst,rfifo_count[7:0],switch_buffer,switch_buffer_ack,M_AXI_AWID[2:0],M_AXI_AWADDR[31:0],M_AXI_AWLEN[3:0],M_AXI_AWSIZE[2:0],M_AXI_AWBURST[1:0],M_AXI_AWLOCK[1:0],M_AXI_AWCACHE[3:0],M_AXI_AWPROT[2:0],M_AXI_AWQOS[3:0],M_AXI_AWUSER[4:0],M_AXI_AWVALID,M_AXI_AWREADY,M_AXI_WID[5:0],M_AXI_WDATA[63:0],M_AXI_WSTRB[7:0],M_AXI_WLAST,M_AXI_WVALID,M_AXI_WREADY,M_AXI_BID[2:0],M_AXI_BRESP[1:0],M_AXI_BVALID,M_AXI_BREADY,M_AXI_ARID[2:0],M_AXI_ARADDR[31:0],M_AXI_ARLEN[3:0],M_AXI_ARSIZE[2:0],M_AXI_ARBURST[1:0],M_AXI_ARLOCK[1:0],M_AXI_ARCACHE[3:0],M_AXI_ARPROT[2:0],M_AXI_ARQOS[3:0],M_AXI_ARUSER[4:0],M_AXI_ARVALID,M_AXI_ARREADY,M_AXI_RID[2:0],M_AXI_RDATA[63:0],M_AXI_RRESP[1:0],M_AXI_RLAST,M_AXI_RVALID,M_AXI_RREADY" */;
  output [3:0]VGA_R;
  output [3:0]VGA_G;
  output [3:0]VGA_B;
  output VGA_HS;
  output VGA_VS;
  input clk;
  input pixel_clk;
  input rstn;
  input pixel_rstn;
  input fifo_rst;
  input [7:0]rfifo_count;
  input switch_buffer;
  output switch_buffer_ack;
  output [2:0]M_AXI_AWID;
  output [31:0]M_AXI_AWADDR;
  output [3:0]M_AXI_AWLEN;
  output [2:0]M_AXI_AWSIZE;
  output [1:0]M_AXI_AWBURST;
  output [1:0]M_AXI_AWLOCK;
  output [3:0]M_AXI_AWCACHE;
  output [2:0]M_AXI_AWPROT;
  output [3:0]M_AXI_AWQOS;
  output [4:0]M_AXI_AWUSER;
  output M_AXI_AWVALID;
  input M_AXI_AWREADY;
  output [5:0]M_AXI_WID;
  output [63:0]M_AXI_WDATA;
  output [7:0]M_AXI_WSTRB;
  output M_AXI_WLAST;
  output M_AXI_WVALID;
  input M_AXI_WREADY;
  input [2:0]M_AXI_BID;
  input [1:0]M_AXI_BRESP;
  input M_AXI_BVALID;
  output M_AXI_BREADY;
  output [2:0]M_AXI_ARID;
  output [31:0]M_AXI_ARADDR;
  output [3:0]M_AXI_ARLEN;
  output [2:0]M_AXI_ARSIZE;
  output [1:0]M_AXI_ARBURST;
  output [1:0]M_AXI_ARLOCK;
  output [3:0]M_AXI_ARCACHE;
  output [2:0]M_AXI_ARPROT;
  output [3:0]M_AXI_ARQOS;
  output [4:0]M_AXI_ARUSER;
  output M_AXI_ARVALID;
  input M_AXI_ARREADY;
  input [2:0]M_AXI_RID;
  input [63:0]M_AXI_RDATA;
  input [1:0]M_AXI_RRESP;
  input M_AXI_RLAST;
  input M_AXI_RVALID;
  output M_AXI_RREADY;
endmodule
