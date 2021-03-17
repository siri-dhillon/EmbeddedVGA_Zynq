vlib work
vlib activehdl

vlib activehdl/xpm
vlib activehdl/xil_defaultlib
vlib activehdl/axi_lite_ipif_v3_0_4
vlib activehdl/v_tc_v6_1_13
vlib activehdl/v_vid_in_axi4s_v4_0_9
vlib activehdl/v_axi4s_vid_out_v4_0_11
vlib activehdl/v_tc_v6_2_1
vlib activehdl/lib_cdc_v1_0_2
vlib activehdl/proc_sys_reset_v5_0_13
vlib activehdl/xlconstant_v1_1_7
vlib activehdl/xlslice_v1_0_2

vmap xpm activehdl/xpm
vmap xil_defaultlib activehdl/xil_defaultlib
vmap axi_lite_ipif_v3_0_4 activehdl/axi_lite_ipif_v3_0_4
vmap v_tc_v6_1_13 activehdl/v_tc_v6_1_13
vmap v_vid_in_axi4s_v4_0_9 activehdl/v_vid_in_axi4s_v4_0_9
vmap v_axi4s_vid_out_v4_0_11 activehdl/v_axi4s_vid_out_v4_0_11
vmap v_tc_v6_2_1 activehdl/v_tc_v6_2_1
vmap lib_cdc_v1_0_2 activehdl/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 activehdl/proc_sys_reset_v5_0_13
vmap xlconstant_v1_1_7 activehdl/xlconstant_v1_1_7
vmap xlslice_v1_0_2 activehdl/xlslice_v1_0_2

vlog -work xpm  -sv2k12 "+incdir+../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/d0f7" \
"C:/Xilinx/Vivado/2020.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/Xilinx/Vivado/2020.2/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"C:/Xilinx/Vivado/2020.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"C:/Xilinx/Vivado/2020.2/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/d0f7" \
"../../../bd/vgaSystem/ip/vgaSystem_clk_wiz_0_0/vgaSystem_clk_wiz_0_0_clk_wiz.v" \
"../../../bd/vgaSystem/ip/vgaSystem_clk_wiz_0_0/vgaSystem_clk_wiz_0_0.v" \

vcom -work axi_lite_ipif_v3_0_4 -93 \
"../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \

vcom -work v_tc_v6_1_13 -93 \
"../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/b92e/hdl/v_tc_v6_1_vh_rfs.vhd" \

vlog -work v_vid_in_axi4s_v4_0_9  -v2k5 "+incdir+../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/d0f7" \
"../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/b2aa/hdl/v_vid_in_axi4s_v4_0_vl_rfs.v" \

vlog -work v_axi4s_vid_out_v4_0_11  -v2k5 "+incdir+../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/d0f7" \
"../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/1a1e/hdl/v_axi4s_vid_out_v4_0_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/d0f7" \
"../../../bd/vgaSystem/ip/vgaSystem_v_axi4s_vid_out_0_0/sim/vgaSystem_v_axi4s_vid_out_0_0.v" \

vcom -work v_tc_v6_2_1 -93 \
"../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/cd2e/hdl/v_tc_v6_2_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/vgaSystem/ip/vgaSystem_v_tc_0_0/sim/vgaSystem_v_tc_0_0.vhd" \

vcom -work lib_cdc_v1_0_2 -93 \
"../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13 -93 \
"../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/vgaSystem/ip/vgaSystem_rst_clk_wiz_0_148M_0/sim/vgaSystem_rst_clk_wiz_0_148M_0.vhd" \

vlog -work xlconstant_v1_1_7  -v2k5 "+incdir+../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/d0f7" \
"../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/fcfc/hdl/xlconstant_v1_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/d0f7" \
"../../../bd/vgaSystem/ip/vgaSystem_xlconstant_0_0/sim/vgaSystem_xlconstant_0_0.v" \

vlog -work xlslice_v1_0_2  -v2k5 "+incdir+../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/d0f7" \
"../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/11d0/hdl/xlslice_v1_0_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../vgainterface.gen/sources_1/bd/vgaSystem/ipshared/d0f7" \
"../../../bd/vgaSystem/ip/vgaSystem_xlslice_0_0/sim/vgaSystem_xlslice_0_0.v" \
"../../../bd/vgaSystem/ip/vgaSystem_xlslice_0_1/sim/vgaSystem_xlslice_0_1.v" \
"../../../bd/vgaSystem/ip/vgaSystem_xlslice_1_0/sim/vgaSystem_xlslice_1_0.v" \
"../../../bd/vgaSystem/ip/vgaSystem_dataGen_0_0/sim/vgaSystem_dataGen_0_0.v" \
"../../../bd/vgaSystem/sim/vgaSystem.v" \

vlog -work xil_defaultlib \
"glbl.v"

