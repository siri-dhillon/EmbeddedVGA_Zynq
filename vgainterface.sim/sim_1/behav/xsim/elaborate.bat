@echo off
REM ****************************************************************************
REM Vivado (TM) v2020.2 (64-bit)
REM
REM Filename    : elaborate.bat
REM Simulator   : Xilinx Vivado Simulator
REM Description : Script for elaborating the compiled design
REM
REM Generated by Vivado on Wed Mar 17 02:06:34 -0700 2021
REM SW Build 3064766 on Wed Nov 18 09:12:45 MST 2020
REM
REM Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
REM
REM usage: elaborate.bat
REM
REM ****************************************************************************
REM elaborate design
echo "xelab -wto 5083eff870954961972b85c01c35c0a1 --incr --debug typical --relax --mt 2 -L xil_defaultlib -L axi_lite_ipif_v3_0_4 -L v_tc_v6_1_13 -L v_vid_in_axi4s_v4_0_9 -L v_axi4s_vid_out_v4_0_11 -L v_tc_v6_2_1 -L lib_cdc_v1_0_2 -L proc_sys_reset_v5_0_13 -L xlconstant_v1_1_7 -L xlslice_v1_0_2 -L unisims_ver -L unimacro_ver -L secureip -L xpm --snapshot vgaSystem_wrapper_behav xil_defaultlib.vgaSystem_wrapper xil_defaultlib.glbl -log elaborate.log"
call xelab  -wto 5083eff870954961972b85c01c35c0a1 --incr --debug typical --relax --mt 2 -L xil_defaultlib -L axi_lite_ipif_v3_0_4 -L v_tc_v6_1_13 -L v_vid_in_axi4s_v4_0_9 -L v_axi4s_vid_out_v4_0_11 -L v_tc_v6_2_1 -L lib_cdc_v1_0_2 -L proc_sys_reset_v5_0_13 -L xlconstant_v1_1_7 -L xlslice_v1_0_2 -L unisims_ver -L unimacro_ver -L secureip -L xpm --snapshot vgaSystem_wrapper_behav xil_defaultlib.vgaSystem_wrapper xil_defaultlib.glbl -log elaborate.log
if "%errorlevel%"=="0" goto SUCCESS
if "%errorlevel%"=="1" goto END
:END
exit 1
:SUCCESS
exit 0
