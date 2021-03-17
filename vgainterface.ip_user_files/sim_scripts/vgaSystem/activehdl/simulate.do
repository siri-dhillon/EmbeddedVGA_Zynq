onbreak {quit -force}
onerror {quit -force}

asim +access +r +m+vgaSystem -L xpm -L xil_defaultlib -L axi_lite_ipif_v3_0_4 -L v_tc_v6_1_13 -L v_vid_in_axi4s_v4_0_9 -L v_axi4s_vid_out_v4_0_11 -L v_tc_v6_2_1 -L lib_cdc_v1_0_2 -L proc_sys_reset_v5_0_13 -L xlconstant_v1_1_7 -L xlslice_v1_0_2 -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.vgaSystem xil_defaultlib.glbl

do {wave.do}

view wave
view structure

do {vgaSystem.udo}

run -all

endsim

quit -force
