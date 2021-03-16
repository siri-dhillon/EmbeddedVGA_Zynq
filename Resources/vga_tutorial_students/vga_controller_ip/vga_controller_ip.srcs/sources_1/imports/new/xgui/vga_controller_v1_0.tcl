# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  ipgui::add_param $IPINST -name "h_back_porch" -parent ${Page_0}
  ipgui::add_param $IPINST -name "h_front_porch" -parent ${Page_0}
  ipgui::add_param $IPINST -name "h_sync_polarity" -parent ${Page_0}
  ipgui::add_param $IPINST -name "h_sync_pulse" -parent ${Page_0}
  ipgui::add_param $IPINST -name "horizontal_length" -parent ${Page_0}
  ipgui::add_param $IPINST -name "v_back_porch" -parent ${Page_0}
  ipgui::add_param $IPINST -name "v_front_porch" -parent ${Page_0}
  ipgui::add_param $IPINST -name "v_sync_polarity" -parent ${Page_0}
  ipgui::add_param $IPINST -name "v_sync_pulse" -parent ${Page_0}
  ipgui::add_param $IPINST -name "vertical_length" -parent ${Page_0}

  ipgui::add_param $IPINST -name "image_buffer2_baseaddr"
  ipgui::add_param $IPINST -name "image_buffer1_baseaddr"

}

proc update_PARAM_VALUE.h_back_porch { PARAM_VALUE.h_back_porch } {
	# Procedure called to update h_back_porch when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.h_back_porch { PARAM_VALUE.h_back_porch } {
	# Procedure called to validate h_back_porch
	return true
}

proc update_PARAM_VALUE.h_front_porch { PARAM_VALUE.h_front_porch } {
	# Procedure called to update h_front_porch when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.h_front_porch { PARAM_VALUE.h_front_porch } {
	# Procedure called to validate h_front_porch
	return true
}

proc update_PARAM_VALUE.h_sync_polarity { PARAM_VALUE.h_sync_polarity } {
	# Procedure called to update h_sync_polarity when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.h_sync_polarity { PARAM_VALUE.h_sync_polarity } {
	# Procedure called to validate h_sync_polarity
	return true
}

proc update_PARAM_VALUE.h_sync_pulse { PARAM_VALUE.h_sync_pulse } {
	# Procedure called to update h_sync_pulse when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.h_sync_pulse { PARAM_VALUE.h_sync_pulse } {
	# Procedure called to validate h_sync_pulse
	return true
}

proc update_PARAM_VALUE.horizontal_length { PARAM_VALUE.horizontal_length } {
	# Procedure called to update horizontal_length when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.horizontal_length { PARAM_VALUE.horizontal_length } {
	# Procedure called to validate horizontal_length
	return true
}

proc update_PARAM_VALUE.image_buffer1_baseaddr { PARAM_VALUE.image_buffer1_baseaddr } {
	# Procedure called to update image_buffer1_baseaddr when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.image_buffer1_baseaddr { PARAM_VALUE.image_buffer1_baseaddr } {
	# Procedure called to validate image_buffer1_baseaddr
	return true
}

proc update_PARAM_VALUE.image_buffer2_baseaddr { PARAM_VALUE.image_buffer2_baseaddr } {
	# Procedure called to update image_buffer2_baseaddr when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.image_buffer2_baseaddr { PARAM_VALUE.image_buffer2_baseaddr } {
	# Procedure called to validate image_buffer2_baseaddr
	return true
}

proc update_PARAM_VALUE.v_back_porch { PARAM_VALUE.v_back_porch } {
	# Procedure called to update v_back_porch when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.v_back_porch { PARAM_VALUE.v_back_porch } {
	# Procedure called to validate v_back_porch
	return true
}

proc update_PARAM_VALUE.v_front_porch { PARAM_VALUE.v_front_porch } {
	# Procedure called to update v_front_porch when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.v_front_porch { PARAM_VALUE.v_front_porch } {
	# Procedure called to validate v_front_porch
	return true
}

proc update_PARAM_VALUE.v_sync_polarity { PARAM_VALUE.v_sync_polarity } {
	# Procedure called to update v_sync_polarity when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.v_sync_polarity { PARAM_VALUE.v_sync_polarity } {
	# Procedure called to validate v_sync_polarity
	return true
}

proc update_PARAM_VALUE.v_sync_pulse { PARAM_VALUE.v_sync_pulse } {
	# Procedure called to update v_sync_pulse when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.v_sync_pulse { PARAM_VALUE.v_sync_pulse } {
	# Procedure called to validate v_sync_pulse
	return true
}

proc update_PARAM_VALUE.vertical_length { PARAM_VALUE.vertical_length } {
	# Procedure called to update vertical_length when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.vertical_length { PARAM_VALUE.vertical_length } {
	# Procedure called to validate vertical_length
	return true
}


proc update_MODELPARAM_VALUE.image_buffer1_baseaddr { MODELPARAM_VALUE.image_buffer1_baseaddr PARAM_VALUE.image_buffer1_baseaddr } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.image_buffer1_baseaddr}] ${MODELPARAM_VALUE.image_buffer1_baseaddr}
}

proc update_MODELPARAM_VALUE.horizontal_length { MODELPARAM_VALUE.horizontal_length PARAM_VALUE.horizontal_length } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.horizontal_length}] ${MODELPARAM_VALUE.horizontal_length}
}

proc update_MODELPARAM_VALUE.vertical_length { MODELPARAM_VALUE.vertical_length PARAM_VALUE.vertical_length } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.vertical_length}] ${MODELPARAM_VALUE.vertical_length}
}

proc update_MODELPARAM_VALUE.h_front_porch { MODELPARAM_VALUE.h_front_porch PARAM_VALUE.h_front_porch } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.h_front_porch}] ${MODELPARAM_VALUE.h_front_porch}
}

proc update_MODELPARAM_VALUE.h_sync_pulse { MODELPARAM_VALUE.h_sync_pulse PARAM_VALUE.h_sync_pulse } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.h_sync_pulse}] ${MODELPARAM_VALUE.h_sync_pulse}
}

proc update_MODELPARAM_VALUE.h_back_porch { MODELPARAM_VALUE.h_back_porch PARAM_VALUE.h_back_porch } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.h_back_porch}] ${MODELPARAM_VALUE.h_back_porch}
}

proc update_MODELPARAM_VALUE.v_front_porch { MODELPARAM_VALUE.v_front_porch PARAM_VALUE.v_front_porch } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.v_front_porch}] ${MODELPARAM_VALUE.v_front_porch}
}

proc update_MODELPARAM_VALUE.v_sync_pulse { MODELPARAM_VALUE.v_sync_pulse PARAM_VALUE.v_sync_pulse } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.v_sync_pulse}] ${MODELPARAM_VALUE.v_sync_pulse}
}

proc update_MODELPARAM_VALUE.v_back_porch { MODELPARAM_VALUE.v_back_porch PARAM_VALUE.v_back_porch } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.v_back_porch}] ${MODELPARAM_VALUE.v_back_porch}
}

proc update_MODELPARAM_VALUE.h_sync_polarity { MODELPARAM_VALUE.h_sync_polarity PARAM_VALUE.h_sync_polarity } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.h_sync_polarity}] ${MODELPARAM_VALUE.h_sync_polarity}
}

proc update_MODELPARAM_VALUE.v_sync_polarity { MODELPARAM_VALUE.v_sync_polarity PARAM_VALUE.v_sync_polarity } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.v_sync_polarity}] ${MODELPARAM_VALUE.v_sync_polarity}
}

proc update_MODELPARAM_VALUE.image_buffer2_baseaddr { MODELPARAM_VALUE.image_buffer2_baseaddr PARAM_VALUE.image_buffer2_baseaddr } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.image_buffer2_baseaddr}] ${MODELPARAM_VALUE.image_buffer2_baseaddr}
}

