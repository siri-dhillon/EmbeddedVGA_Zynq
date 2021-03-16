// (c) Copyright 1995-2021 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


#include "design_1_smartconnect_0_0_sc.h"

#include "design_1_smartconnect_0_0.h"

#include "smartconnect.h"

#include <map>
#include <string>





#ifdef XILINX_SIMULATOR
design_1_smartconnect_0_0::design_1_smartconnect_0_0(const sc_core::sc_module_name& nm) : design_1_smartconnect_0_0_sc(nm), aclk("aclk"), aresetn("aresetn"), S00_AXI_awid("S00_AXI_awid"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wid("S00_AXI_wid"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bid("S00_AXI_bid"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_arid("S00_AXI_arid"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rid("S00_AXI_rid"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), S01_AXI_awid("S01_AXI_awid"), S01_AXI_awaddr("S01_AXI_awaddr"), S01_AXI_awlen("S01_AXI_awlen"), S01_AXI_awsize("S01_AXI_awsize"), S01_AXI_awburst("S01_AXI_awburst"), S01_AXI_awlock("S01_AXI_awlock"), S01_AXI_awcache("S01_AXI_awcache"), S01_AXI_awprot("S01_AXI_awprot"), S01_AXI_awregion("S01_AXI_awregion"), S01_AXI_awqos("S01_AXI_awqos"), S01_AXI_awuser("S01_AXI_awuser"), S01_AXI_awvalid("S01_AXI_awvalid"), S01_AXI_awready("S01_AXI_awready"), S01_AXI_wid("S01_AXI_wid"), S01_AXI_wdata("S01_AXI_wdata"), S01_AXI_wstrb("S01_AXI_wstrb"), S01_AXI_wlast("S01_AXI_wlast"), S01_AXI_wuser("S01_AXI_wuser"), S01_AXI_wvalid("S01_AXI_wvalid"), S01_AXI_wready("S01_AXI_wready"), S01_AXI_bid("S01_AXI_bid"), S01_AXI_bresp("S01_AXI_bresp"), S01_AXI_buser("S01_AXI_buser"), S01_AXI_bvalid("S01_AXI_bvalid"), S01_AXI_bready("S01_AXI_bready"), S01_AXI_arid("S01_AXI_arid"), S01_AXI_araddr("S01_AXI_araddr"), S01_AXI_arlen("S01_AXI_arlen"), S01_AXI_arsize("S01_AXI_arsize"), S01_AXI_arburst("S01_AXI_arburst"), S01_AXI_arlock("S01_AXI_arlock"), S01_AXI_arcache("S01_AXI_arcache"), S01_AXI_arprot("S01_AXI_arprot"), S01_AXI_arregion("S01_AXI_arregion"), S01_AXI_arqos("S01_AXI_arqos"), S01_AXI_aruser("S01_AXI_aruser"), S01_AXI_arvalid("S01_AXI_arvalid"), S01_AXI_arready("S01_AXI_arready"), S01_AXI_rid("S01_AXI_rid"), S01_AXI_rdata("S01_AXI_rdata"), S01_AXI_rresp("S01_AXI_rresp"), S01_AXI_rlast("S01_AXI_rlast"), S01_AXI_ruser("S01_AXI_ruser"), S01_AXI_rvalid("S01_AXI_rvalid"), S01_AXI_rready("S01_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlen_converter = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlen_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_S01_AXI_transactor = NULL;
  mp_S01_AXI_awid_converter = NULL;
  mp_S01_AXI_awaddr_converter = NULL;
  mp_S01_AXI_awlen_converter = NULL;
  mp_S01_AXI_awuser_converter = NULL;
  mp_S01_AXI_awvalid_converter = NULL;
  mp_S01_AXI_awready_converter = NULL;
  mp_S01_AXI_wdata_converter = NULL;
  mp_S01_AXI_wstrb_converter = NULL;
  mp_S01_AXI_wlast_converter = NULL;
  mp_S01_AXI_wuser_converter = NULL;
  mp_S01_AXI_wvalid_converter = NULL;
  mp_S01_AXI_wready_converter = NULL;
  mp_S01_AXI_bid_converter = NULL;
  mp_S01_AXI_buser_converter = NULL;
  mp_S01_AXI_bvalid_converter = NULL;
  mp_S01_AXI_bready_converter = NULL;
  mp_S01_AXI_arid_converter = NULL;
  mp_S01_AXI_araddr_converter = NULL;
  mp_S01_AXI_arlen_converter = NULL;
  mp_S01_AXI_aruser_converter = NULL;
  mp_S01_AXI_arvalid_converter = NULL;
  mp_S01_AXI_arready_converter = NULL;
  mp_S01_AXI_rid_converter = NULL;
  mp_S01_AXI_rdata_converter = NULL;
  mp_S01_AXI_rlast_converter = NULL;
  mp_S01_AXI_ruser_converter = NULL;
  mp_S01_AXI_rvalid_converter = NULL;
  mp_S01_AXI_rready_converter = NULL;
  mp_M00_AXI_transactor = NULL;

  // initialize socket stubs

}

void design_1_smartconnect_0_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI3");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWID(S00_AXI_awid);
    mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
    mp_S00_AXI_awlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_awlen_converter");
    mp_S00_AXI_awlen_converter->vector_in(S00_AXI_awlen);
    mp_S00_AXI_awlen_converter->vector_out(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWLEN(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
    mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
    mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_awlock_converter");
    mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
    mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
    mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
    mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
    mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
    mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
    mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
    mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
    mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
    mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
    mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
    mp_S00_AXI_transactor->BID(S00_AXI_bid);
    mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
    mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
    mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
    mp_S00_AXI_transactor->ARID(S00_AXI_arid);
    mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
    mp_S00_AXI_arlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_arlen_converter");
    mp_S00_AXI_arlen_converter->vector_in(S00_AXI_arlen);
    mp_S00_AXI_arlen_converter->vector_out(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARLEN(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
    mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
    mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_arlock_converter");
    mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
    mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
    mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
    mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
    mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
    mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
    mp_S00_AXI_transactor->RID(S00_AXI_rid);
    mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
    mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
    mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
    mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
    mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'S01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "S01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S01_AXI' transactor parameters
    xsc::common_cpp::properties S01_AXI_transactor_param_props;
    S01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S01_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    S01_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S01_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    S01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    S01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    S01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    S01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S01_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    S01_AXI_transactor_param_props.addString("PROTOCOL", "");
    S01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S01_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_S01_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,1,1,1,1,1,1>("S01_AXI_transactor", S01_AXI_transactor_param_props);

    // S01_AXI' transactor ports

    mp_S01_AXI_awid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awid_converter");
    mp_S01_AXI_awid_converter->scalar_in(S01_AXI_awid);
    mp_S01_AXI_awid_converter->vector_out(m_S01_AXI_awid_converter_signal);
    mp_S01_AXI_transactor->AWID(m_S01_AXI_awid_converter_signal);
    mp_S01_AXI_awaddr_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_awaddr_converter");
    mp_S01_AXI_awaddr_converter->scalar_in(S01_AXI_awaddr);
    mp_S01_AXI_awaddr_converter->vector_out(m_S01_AXI_awaddr_converter_signal);
    mp_S01_AXI_transactor->AWADDR(m_S01_AXI_awaddr_converter_signal);
    mp_S01_AXI_awlen_converter = new xsc::common::scalar2vectorN_converter<8>("S01_AXI_awlen_converter");
    mp_S01_AXI_awlen_converter->scalar_in(S01_AXI_awlen);
    mp_S01_AXI_awlen_converter->vector_out(m_S01_AXI_awlen_converter_signal);
    mp_S01_AXI_transactor->AWLEN(m_S01_AXI_awlen_converter_signal);
    mp_S01_AXI_transactor->AWSIZE(S01_AXI_awsize);
    mp_S01_AXI_transactor->AWBURST(S01_AXI_awburst);
    mp_S01_AXI_transactor->AWLOCK(S01_AXI_awlock);
    mp_S01_AXI_transactor->AWCACHE(S01_AXI_awcache);
    mp_S01_AXI_transactor->AWPROT(S01_AXI_awprot);
    mp_S01_AXI_transactor->AWREGION(S01_AXI_awregion);
    mp_S01_AXI_transactor->AWQOS(S01_AXI_awqos);
    mp_S01_AXI_awuser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awuser_converter");
    mp_S01_AXI_awuser_converter->scalar_in(S01_AXI_awuser);
    mp_S01_AXI_awuser_converter->vector_out(m_S01_AXI_awuser_converter_signal);
    mp_S01_AXI_transactor->AWUSER(m_S01_AXI_awuser_converter_signal);
    mp_S01_AXI_awvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_awvalid_converter");
    mp_S01_AXI_awvalid_converter->vector_in(S01_AXI_awvalid);
    mp_S01_AXI_awvalid_converter->scalar_out(m_S01_AXI_awvalid_converter_signal);
    mp_S01_AXI_transactor->AWVALID(m_S01_AXI_awvalid_converter_signal);
    mp_S01_AXI_awready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awready_converter");
    mp_S01_AXI_awready_converter->scalar_in(m_S01_AXI_awready_converter_signal);
    mp_S01_AXI_awready_converter->vector_out(S01_AXI_awready);
    mp_S01_AXI_transactor->AWREADY(m_S01_AXI_awready_converter_signal);
    mp_S01_AXI_wdata_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_wdata_converter");
    mp_S01_AXI_wdata_converter->scalar_in(S01_AXI_wdata);
    mp_S01_AXI_wdata_converter->vector_out(m_S01_AXI_wdata_converter_signal);
    mp_S01_AXI_transactor->WDATA(m_S01_AXI_wdata_converter_signal);
    mp_S01_AXI_wstrb_converter = new xsc::common::scalar2vectorN_converter<4>("S01_AXI_wstrb_converter");
    mp_S01_AXI_wstrb_converter->scalar_in(S01_AXI_wstrb);
    mp_S01_AXI_wstrb_converter->vector_out(m_S01_AXI_wstrb_converter_signal);
    mp_S01_AXI_transactor->WSTRB(m_S01_AXI_wstrb_converter_signal);
    mp_S01_AXI_wlast_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_wlast_converter");
    mp_S01_AXI_wlast_converter->vector_in(S01_AXI_wlast);
    mp_S01_AXI_wlast_converter->scalar_out(m_S01_AXI_wlast_converter_signal);
    mp_S01_AXI_transactor->WLAST(m_S01_AXI_wlast_converter_signal);
    mp_S01_AXI_wuser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_wuser_converter");
    mp_S01_AXI_wuser_converter->scalar_in(S01_AXI_wuser);
    mp_S01_AXI_wuser_converter->vector_out(m_S01_AXI_wuser_converter_signal);
    mp_S01_AXI_transactor->WUSER(m_S01_AXI_wuser_converter_signal);
    mp_S01_AXI_wvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_wvalid_converter");
    mp_S01_AXI_wvalid_converter->vector_in(S01_AXI_wvalid);
    mp_S01_AXI_wvalid_converter->scalar_out(m_S01_AXI_wvalid_converter_signal);
    mp_S01_AXI_transactor->WVALID(m_S01_AXI_wvalid_converter_signal);
    mp_S01_AXI_wready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_wready_converter");
    mp_S01_AXI_wready_converter->scalar_in(m_S01_AXI_wready_converter_signal);
    mp_S01_AXI_wready_converter->vector_out(S01_AXI_wready);
    mp_S01_AXI_transactor->WREADY(m_S01_AXI_wready_converter_signal);
    mp_S01_AXI_bid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_bid_converter");
    mp_S01_AXI_bid_converter->vector_in(m_S01_AXI_bid_converter_signal);
    mp_S01_AXI_bid_converter->scalar_out(S01_AXI_bid);
    mp_S01_AXI_transactor->BID(m_S01_AXI_bid_converter_signal);
    mp_S01_AXI_transactor->BRESP(S01_AXI_bresp);
    mp_S01_AXI_buser_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_buser_converter");
    mp_S01_AXI_buser_converter->vector_in(m_S01_AXI_buser_converter_signal);
    mp_S01_AXI_buser_converter->scalar_out(S01_AXI_buser);
    mp_S01_AXI_transactor->BUSER(m_S01_AXI_buser_converter_signal);
    mp_S01_AXI_bvalid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_bvalid_converter");
    mp_S01_AXI_bvalid_converter->scalar_in(m_S01_AXI_bvalid_converter_signal);
    mp_S01_AXI_bvalid_converter->vector_out(S01_AXI_bvalid);
    mp_S01_AXI_transactor->BVALID(m_S01_AXI_bvalid_converter_signal);
    mp_S01_AXI_bready_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_bready_converter");
    mp_S01_AXI_bready_converter->vector_in(S01_AXI_bready);
    mp_S01_AXI_bready_converter->scalar_out(m_S01_AXI_bready_converter_signal);
    mp_S01_AXI_transactor->BREADY(m_S01_AXI_bready_converter_signal);
    mp_S01_AXI_arid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_arid_converter");
    mp_S01_AXI_arid_converter->scalar_in(S01_AXI_arid);
    mp_S01_AXI_arid_converter->vector_out(m_S01_AXI_arid_converter_signal);
    mp_S01_AXI_transactor->ARID(m_S01_AXI_arid_converter_signal);
    mp_S01_AXI_araddr_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_araddr_converter");
    mp_S01_AXI_araddr_converter->scalar_in(S01_AXI_araddr);
    mp_S01_AXI_araddr_converter->vector_out(m_S01_AXI_araddr_converter_signal);
    mp_S01_AXI_transactor->ARADDR(m_S01_AXI_araddr_converter_signal);
    mp_S01_AXI_arlen_converter = new xsc::common::scalar2vectorN_converter<8>("S01_AXI_arlen_converter");
    mp_S01_AXI_arlen_converter->scalar_in(S01_AXI_arlen);
    mp_S01_AXI_arlen_converter->vector_out(m_S01_AXI_arlen_converter_signal);
    mp_S01_AXI_transactor->ARLEN(m_S01_AXI_arlen_converter_signal);
    mp_S01_AXI_transactor->ARSIZE(S01_AXI_arsize);
    mp_S01_AXI_transactor->ARBURST(S01_AXI_arburst);
    mp_S01_AXI_transactor->ARLOCK(S01_AXI_arlock);
    mp_S01_AXI_transactor->ARCACHE(S01_AXI_arcache);
    mp_S01_AXI_transactor->ARPROT(S01_AXI_arprot);
    mp_S01_AXI_transactor->ARREGION(S01_AXI_arregion);
    mp_S01_AXI_transactor->ARQOS(S01_AXI_arqos);
    mp_S01_AXI_aruser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_aruser_converter");
    mp_S01_AXI_aruser_converter->scalar_in(S01_AXI_aruser);
    mp_S01_AXI_aruser_converter->vector_out(m_S01_AXI_aruser_converter_signal);
    mp_S01_AXI_transactor->ARUSER(m_S01_AXI_aruser_converter_signal);
    mp_S01_AXI_arvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_arvalid_converter");
    mp_S01_AXI_arvalid_converter->vector_in(S01_AXI_arvalid);
    mp_S01_AXI_arvalid_converter->scalar_out(m_S01_AXI_arvalid_converter_signal);
    mp_S01_AXI_transactor->ARVALID(m_S01_AXI_arvalid_converter_signal);
    mp_S01_AXI_arready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_arready_converter");
    mp_S01_AXI_arready_converter->scalar_in(m_S01_AXI_arready_converter_signal);
    mp_S01_AXI_arready_converter->vector_out(S01_AXI_arready);
    mp_S01_AXI_transactor->ARREADY(m_S01_AXI_arready_converter_signal);
    mp_S01_AXI_rid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_rid_converter");
    mp_S01_AXI_rid_converter->vector_in(m_S01_AXI_rid_converter_signal);
    mp_S01_AXI_rid_converter->scalar_out(S01_AXI_rid);
    mp_S01_AXI_transactor->RID(m_S01_AXI_rid_converter_signal);
    mp_S01_AXI_rdata_converter = new xsc::common::vectorN2scalar_converter<32>("S01_AXI_rdata_converter");
    mp_S01_AXI_rdata_converter->vector_in(m_S01_AXI_rdata_converter_signal);
    mp_S01_AXI_rdata_converter->scalar_out(S01_AXI_rdata);
    mp_S01_AXI_transactor->RDATA(m_S01_AXI_rdata_converter_signal);
    mp_S01_AXI_transactor->RRESP(S01_AXI_rresp);
    mp_S01_AXI_rlast_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_rlast_converter");
    mp_S01_AXI_rlast_converter->scalar_in(m_S01_AXI_rlast_converter_signal);
    mp_S01_AXI_rlast_converter->vector_out(S01_AXI_rlast);
    mp_S01_AXI_transactor->RLAST(m_S01_AXI_rlast_converter_signal);
    mp_S01_AXI_ruser_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_ruser_converter");
    mp_S01_AXI_ruser_converter->vector_in(m_S01_AXI_ruser_converter_signal);
    mp_S01_AXI_ruser_converter->scalar_out(S01_AXI_ruser);
    mp_S01_AXI_transactor->RUSER(m_S01_AXI_ruser_converter_signal);
    mp_S01_AXI_rvalid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_rvalid_converter");
    mp_S01_AXI_rvalid_converter->scalar_in(m_S01_AXI_rvalid_converter_signal);
    mp_S01_AXI_rvalid_converter->vector_out(S01_AXI_rvalid);
    mp_S01_AXI_transactor->RVALID(m_S01_AXI_rvalid_converter_signal);
    mp_S01_AXI_rready_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_rready_converter");
    mp_S01_AXI_rready_converter->vector_in(S01_AXI_rready);
    mp_S01_AXI_rready_converter->scalar_out(m_S01_AXI_rready_converter_signal);
    mp_S01_AXI_transactor->RREADY(m_S01_AXI_rready_converter_signal);
    mp_S01_AXI_transactor->CLK(aclk);
    mp_S01_AXI_transactor->RST(aresetn);

    // S01_AXI' transactor sockets

    mp_impl->S01_AXI_tlm_aximm_read_socket->bind(*(mp_S01_AXI_transactor->rd_socket));
    mp_impl->S01_AXI_tlm_aximm_write_socket->bind(*(mp_S01_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "5");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,5,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
    mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
    mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
    mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
    mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
    mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
    mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
    mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
    mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
    mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
    mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
    mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
    mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
    mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
    mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
    mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
    mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
    mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
    mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XILINX_SIMULATOR




#ifdef XM_SYSTEMC
design_1_smartconnect_0_0::design_1_smartconnect_0_0(const sc_core::sc_module_name& nm) : design_1_smartconnect_0_0_sc(nm), aclk("aclk"), aresetn("aresetn"), S00_AXI_awid("S00_AXI_awid"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wid("S00_AXI_wid"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bid("S00_AXI_bid"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_arid("S00_AXI_arid"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rid("S00_AXI_rid"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), S01_AXI_awid("S01_AXI_awid"), S01_AXI_awaddr("S01_AXI_awaddr"), S01_AXI_awlen("S01_AXI_awlen"), S01_AXI_awsize("S01_AXI_awsize"), S01_AXI_awburst("S01_AXI_awburst"), S01_AXI_awlock("S01_AXI_awlock"), S01_AXI_awcache("S01_AXI_awcache"), S01_AXI_awprot("S01_AXI_awprot"), S01_AXI_awregion("S01_AXI_awregion"), S01_AXI_awqos("S01_AXI_awqos"), S01_AXI_awuser("S01_AXI_awuser"), S01_AXI_awvalid("S01_AXI_awvalid"), S01_AXI_awready("S01_AXI_awready"), S01_AXI_wid("S01_AXI_wid"), S01_AXI_wdata("S01_AXI_wdata"), S01_AXI_wstrb("S01_AXI_wstrb"), S01_AXI_wlast("S01_AXI_wlast"), S01_AXI_wuser("S01_AXI_wuser"), S01_AXI_wvalid("S01_AXI_wvalid"), S01_AXI_wready("S01_AXI_wready"), S01_AXI_bid("S01_AXI_bid"), S01_AXI_bresp("S01_AXI_bresp"), S01_AXI_buser("S01_AXI_buser"), S01_AXI_bvalid("S01_AXI_bvalid"), S01_AXI_bready("S01_AXI_bready"), S01_AXI_arid("S01_AXI_arid"), S01_AXI_araddr("S01_AXI_araddr"), S01_AXI_arlen("S01_AXI_arlen"), S01_AXI_arsize("S01_AXI_arsize"), S01_AXI_arburst("S01_AXI_arburst"), S01_AXI_arlock("S01_AXI_arlock"), S01_AXI_arcache("S01_AXI_arcache"), S01_AXI_arprot("S01_AXI_arprot"), S01_AXI_arregion("S01_AXI_arregion"), S01_AXI_arqos("S01_AXI_arqos"), S01_AXI_aruser("S01_AXI_aruser"), S01_AXI_arvalid("S01_AXI_arvalid"), S01_AXI_arready("S01_AXI_arready"), S01_AXI_rid("S01_AXI_rid"), S01_AXI_rdata("S01_AXI_rdata"), S01_AXI_rresp("S01_AXI_rresp"), S01_AXI_rlast("S01_AXI_rlast"), S01_AXI_ruser("S01_AXI_ruser"), S01_AXI_rvalid("S01_AXI_rvalid"), S01_AXI_rready("S01_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlen_converter = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlen_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_S01_AXI_transactor = NULL;
  mp_S01_AXI_awid_converter = NULL;
  mp_S01_AXI_awaddr_converter = NULL;
  mp_S01_AXI_awlen_converter = NULL;
  mp_S01_AXI_awuser_converter = NULL;
  mp_S01_AXI_awvalid_converter = NULL;
  mp_S01_AXI_awready_converter = NULL;
  mp_S01_AXI_wdata_converter = NULL;
  mp_S01_AXI_wstrb_converter = NULL;
  mp_S01_AXI_wlast_converter = NULL;
  mp_S01_AXI_wuser_converter = NULL;
  mp_S01_AXI_wvalid_converter = NULL;
  mp_S01_AXI_wready_converter = NULL;
  mp_S01_AXI_bid_converter = NULL;
  mp_S01_AXI_buser_converter = NULL;
  mp_S01_AXI_bvalid_converter = NULL;
  mp_S01_AXI_bready_converter = NULL;
  mp_S01_AXI_arid_converter = NULL;
  mp_S01_AXI_araddr_converter = NULL;
  mp_S01_AXI_arlen_converter = NULL;
  mp_S01_AXI_aruser_converter = NULL;
  mp_S01_AXI_arvalid_converter = NULL;
  mp_S01_AXI_arready_converter = NULL;
  mp_S01_AXI_rid_converter = NULL;
  mp_S01_AXI_rdata_converter = NULL;
  mp_S01_AXI_rlast_converter = NULL;
  mp_S01_AXI_ruser_converter = NULL;
  mp_S01_AXI_rvalid_converter = NULL;
  mp_S01_AXI_rready_converter = NULL;
  mp_M00_AXI_transactor = NULL;

  // initialize socket stubs

}

void design_1_smartconnect_0_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI3");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWID(S00_AXI_awid);
    mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
    mp_S00_AXI_awlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_awlen_converter");
    mp_S00_AXI_awlen_converter->vector_in(S00_AXI_awlen);
    mp_S00_AXI_awlen_converter->vector_out(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWLEN(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
    mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
    mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_awlock_converter");
    mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
    mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
    mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
    mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
    mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
    mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
    mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
    mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
    mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
    mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
    mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
    mp_S00_AXI_transactor->BID(S00_AXI_bid);
    mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
    mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
    mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
    mp_S00_AXI_transactor->ARID(S00_AXI_arid);
    mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
    mp_S00_AXI_arlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_arlen_converter");
    mp_S00_AXI_arlen_converter->vector_in(S00_AXI_arlen);
    mp_S00_AXI_arlen_converter->vector_out(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARLEN(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
    mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
    mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_arlock_converter");
    mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
    mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
    mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
    mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
    mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
    mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
    mp_S00_AXI_transactor->RID(S00_AXI_rid);
    mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
    mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
    mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
    mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
    mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'S01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "S01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S01_AXI' transactor parameters
    xsc::common_cpp::properties S01_AXI_transactor_param_props;
    S01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S01_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    S01_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S01_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    S01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    S01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    S01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    S01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S01_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    S01_AXI_transactor_param_props.addString("PROTOCOL", "");
    S01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S01_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_S01_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,1,1,1,1,1,1>("S01_AXI_transactor", S01_AXI_transactor_param_props);

    // S01_AXI' transactor ports

    mp_S01_AXI_awid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awid_converter");
    mp_S01_AXI_awid_converter->scalar_in(S01_AXI_awid);
    mp_S01_AXI_awid_converter->vector_out(m_S01_AXI_awid_converter_signal);
    mp_S01_AXI_transactor->AWID(m_S01_AXI_awid_converter_signal);
    mp_S01_AXI_awaddr_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_awaddr_converter");
    mp_S01_AXI_awaddr_converter->scalar_in(S01_AXI_awaddr);
    mp_S01_AXI_awaddr_converter->vector_out(m_S01_AXI_awaddr_converter_signal);
    mp_S01_AXI_transactor->AWADDR(m_S01_AXI_awaddr_converter_signal);
    mp_S01_AXI_awlen_converter = new xsc::common::scalar2vectorN_converter<8>("S01_AXI_awlen_converter");
    mp_S01_AXI_awlen_converter->scalar_in(S01_AXI_awlen);
    mp_S01_AXI_awlen_converter->vector_out(m_S01_AXI_awlen_converter_signal);
    mp_S01_AXI_transactor->AWLEN(m_S01_AXI_awlen_converter_signal);
    mp_S01_AXI_transactor->AWSIZE(S01_AXI_awsize);
    mp_S01_AXI_transactor->AWBURST(S01_AXI_awburst);
    mp_S01_AXI_transactor->AWLOCK(S01_AXI_awlock);
    mp_S01_AXI_transactor->AWCACHE(S01_AXI_awcache);
    mp_S01_AXI_transactor->AWPROT(S01_AXI_awprot);
    mp_S01_AXI_transactor->AWREGION(S01_AXI_awregion);
    mp_S01_AXI_transactor->AWQOS(S01_AXI_awqos);
    mp_S01_AXI_awuser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awuser_converter");
    mp_S01_AXI_awuser_converter->scalar_in(S01_AXI_awuser);
    mp_S01_AXI_awuser_converter->vector_out(m_S01_AXI_awuser_converter_signal);
    mp_S01_AXI_transactor->AWUSER(m_S01_AXI_awuser_converter_signal);
    mp_S01_AXI_awvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_awvalid_converter");
    mp_S01_AXI_awvalid_converter->vector_in(S01_AXI_awvalid);
    mp_S01_AXI_awvalid_converter->scalar_out(m_S01_AXI_awvalid_converter_signal);
    mp_S01_AXI_transactor->AWVALID(m_S01_AXI_awvalid_converter_signal);
    mp_S01_AXI_awready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awready_converter");
    mp_S01_AXI_awready_converter->scalar_in(m_S01_AXI_awready_converter_signal);
    mp_S01_AXI_awready_converter->vector_out(S01_AXI_awready);
    mp_S01_AXI_transactor->AWREADY(m_S01_AXI_awready_converter_signal);
    mp_S01_AXI_wdata_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_wdata_converter");
    mp_S01_AXI_wdata_converter->scalar_in(S01_AXI_wdata);
    mp_S01_AXI_wdata_converter->vector_out(m_S01_AXI_wdata_converter_signal);
    mp_S01_AXI_transactor->WDATA(m_S01_AXI_wdata_converter_signal);
    mp_S01_AXI_wstrb_converter = new xsc::common::scalar2vectorN_converter<4>("S01_AXI_wstrb_converter");
    mp_S01_AXI_wstrb_converter->scalar_in(S01_AXI_wstrb);
    mp_S01_AXI_wstrb_converter->vector_out(m_S01_AXI_wstrb_converter_signal);
    mp_S01_AXI_transactor->WSTRB(m_S01_AXI_wstrb_converter_signal);
    mp_S01_AXI_wlast_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_wlast_converter");
    mp_S01_AXI_wlast_converter->vector_in(S01_AXI_wlast);
    mp_S01_AXI_wlast_converter->scalar_out(m_S01_AXI_wlast_converter_signal);
    mp_S01_AXI_transactor->WLAST(m_S01_AXI_wlast_converter_signal);
    mp_S01_AXI_wuser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_wuser_converter");
    mp_S01_AXI_wuser_converter->scalar_in(S01_AXI_wuser);
    mp_S01_AXI_wuser_converter->vector_out(m_S01_AXI_wuser_converter_signal);
    mp_S01_AXI_transactor->WUSER(m_S01_AXI_wuser_converter_signal);
    mp_S01_AXI_wvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_wvalid_converter");
    mp_S01_AXI_wvalid_converter->vector_in(S01_AXI_wvalid);
    mp_S01_AXI_wvalid_converter->scalar_out(m_S01_AXI_wvalid_converter_signal);
    mp_S01_AXI_transactor->WVALID(m_S01_AXI_wvalid_converter_signal);
    mp_S01_AXI_wready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_wready_converter");
    mp_S01_AXI_wready_converter->scalar_in(m_S01_AXI_wready_converter_signal);
    mp_S01_AXI_wready_converter->vector_out(S01_AXI_wready);
    mp_S01_AXI_transactor->WREADY(m_S01_AXI_wready_converter_signal);
    mp_S01_AXI_bid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_bid_converter");
    mp_S01_AXI_bid_converter->vector_in(m_S01_AXI_bid_converter_signal);
    mp_S01_AXI_bid_converter->scalar_out(S01_AXI_bid);
    mp_S01_AXI_transactor->BID(m_S01_AXI_bid_converter_signal);
    mp_S01_AXI_transactor->BRESP(S01_AXI_bresp);
    mp_S01_AXI_buser_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_buser_converter");
    mp_S01_AXI_buser_converter->vector_in(m_S01_AXI_buser_converter_signal);
    mp_S01_AXI_buser_converter->scalar_out(S01_AXI_buser);
    mp_S01_AXI_transactor->BUSER(m_S01_AXI_buser_converter_signal);
    mp_S01_AXI_bvalid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_bvalid_converter");
    mp_S01_AXI_bvalid_converter->scalar_in(m_S01_AXI_bvalid_converter_signal);
    mp_S01_AXI_bvalid_converter->vector_out(S01_AXI_bvalid);
    mp_S01_AXI_transactor->BVALID(m_S01_AXI_bvalid_converter_signal);
    mp_S01_AXI_bready_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_bready_converter");
    mp_S01_AXI_bready_converter->vector_in(S01_AXI_bready);
    mp_S01_AXI_bready_converter->scalar_out(m_S01_AXI_bready_converter_signal);
    mp_S01_AXI_transactor->BREADY(m_S01_AXI_bready_converter_signal);
    mp_S01_AXI_arid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_arid_converter");
    mp_S01_AXI_arid_converter->scalar_in(S01_AXI_arid);
    mp_S01_AXI_arid_converter->vector_out(m_S01_AXI_arid_converter_signal);
    mp_S01_AXI_transactor->ARID(m_S01_AXI_arid_converter_signal);
    mp_S01_AXI_araddr_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_araddr_converter");
    mp_S01_AXI_araddr_converter->scalar_in(S01_AXI_araddr);
    mp_S01_AXI_araddr_converter->vector_out(m_S01_AXI_araddr_converter_signal);
    mp_S01_AXI_transactor->ARADDR(m_S01_AXI_araddr_converter_signal);
    mp_S01_AXI_arlen_converter = new xsc::common::scalar2vectorN_converter<8>("S01_AXI_arlen_converter");
    mp_S01_AXI_arlen_converter->scalar_in(S01_AXI_arlen);
    mp_S01_AXI_arlen_converter->vector_out(m_S01_AXI_arlen_converter_signal);
    mp_S01_AXI_transactor->ARLEN(m_S01_AXI_arlen_converter_signal);
    mp_S01_AXI_transactor->ARSIZE(S01_AXI_arsize);
    mp_S01_AXI_transactor->ARBURST(S01_AXI_arburst);
    mp_S01_AXI_transactor->ARLOCK(S01_AXI_arlock);
    mp_S01_AXI_transactor->ARCACHE(S01_AXI_arcache);
    mp_S01_AXI_transactor->ARPROT(S01_AXI_arprot);
    mp_S01_AXI_transactor->ARREGION(S01_AXI_arregion);
    mp_S01_AXI_transactor->ARQOS(S01_AXI_arqos);
    mp_S01_AXI_aruser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_aruser_converter");
    mp_S01_AXI_aruser_converter->scalar_in(S01_AXI_aruser);
    mp_S01_AXI_aruser_converter->vector_out(m_S01_AXI_aruser_converter_signal);
    mp_S01_AXI_transactor->ARUSER(m_S01_AXI_aruser_converter_signal);
    mp_S01_AXI_arvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_arvalid_converter");
    mp_S01_AXI_arvalid_converter->vector_in(S01_AXI_arvalid);
    mp_S01_AXI_arvalid_converter->scalar_out(m_S01_AXI_arvalid_converter_signal);
    mp_S01_AXI_transactor->ARVALID(m_S01_AXI_arvalid_converter_signal);
    mp_S01_AXI_arready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_arready_converter");
    mp_S01_AXI_arready_converter->scalar_in(m_S01_AXI_arready_converter_signal);
    mp_S01_AXI_arready_converter->vector_out(S01_AXI_arready);
    mp_S01_AXI_transactor->ARREADY(m_S01_AXI_arready_converter_signal);
    mp_S01_AXI_rid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_rid_converter");
    mp_S01_AXI_rid_converter->vector_in(m_S01_AXI_rid_converter_signal);
    mp_S01_AXI_rid_converter->scalar_out(S01_AXI_rid);
    mp_S01_AXI_transactor->RID(m_S01_AXI_rid_converter_signal);
    mp_S01_AXI_rdata_converter = new xsc::common::vectorN2scalar_converter<32>("S01_AXI_rdata_converter");
    mp_S01_AXI_rdata_converter->vector_in(m_S01_AXI_rdata_converter_signal);
    mp_S01_AXI_rdata_converter->scalar_out(S01_AXI_rdata);
    mp_S01_AXI_transactor->RDATA(m_S01_AXI_rdata_converter_signal);
    mp_S01_AXI_transactor->RRESP(S01_AXI_rresp);
    mp_S01_AXI_rlast_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_rlast_converter");
    mp_S01_AXI_rlast_converter->scalar_in(m_S01_AXI_rlast_converter_signal);
    mp_S01_AXI_rlast_converter->vector_out(S01_AXI_rlast);
    mp_S01_AXI_transactor->RLAST(m_S01_AXI_rlast_converter_signal);
    mp_S01_AXI_ruser_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_ruser_converter");
    mp_S01_AXI_ruser_converter->vector_in(m_S01_AXI_ruser_converter_signal);
    mp_S01_AXI_ruser_converter->scalar_out(S01_AXI_ruser);
    mp_S01_AXI_transactor->RUSER(m_S01_AXI_ruser_converter_signal);
    mp_S01_AXI_rvalid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_rvalid_converter");
    mp_S01_AXI_rvalid_converter->scalar_in(m_S01_AXI_rvalid_converter_signal);
    mp_S01_AXI_rvalid_converter->vector_out(S01_AXI_rvalid);
    mp_S01_AXI_transactor->RVALID(m_S01_AXI_rvalid_converter_signal);
    mp_S01_AXI_rready_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_rready_converter");
    mp_S01_AXI_rready_converter->vector_in(S01_AXI_rready);
    mp_S01_AXI_rready_converter->scalar_out(m_S01_AXI_rready_converter_signal);
    mp_S01_AXI_transactor->RREADY(m_S01_AXI_rready_converter_signal);
    mp_S01_AXI_transactor->CLK(aclk);
    mp_S01_AXI_transactor->RST(aresetn);

    // S01_AXI' transactor sockets

    mp_impl->S01_AXI_tlm_aximm_read_socket->bind(*(mp_S01_AXI_transactor->rd_socket));
    mp_impl->S01_AXI_tlm_aximm_write_socket->bind(*(mp_S01_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "5");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,5,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
    mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
    mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
    mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
    mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
    mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
    mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
    mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
    mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
    mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
    mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
    mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
    mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
    mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
    mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
    mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
    mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
    mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
    mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XM_SYSTEMC




#ifdef RIVIERA
design_1_smartconnect_0_0::design_1_smartconnect_0_0(const sc_core::sc_module_name& nm) : design_1_smartconnect_0_0_sc(nm), aclk("aclk"), aresetn("aresetn"), S00_AXI_awid("S00_AXI_awid"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wid("S00_AXI_wid"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bid("S00_AXI_bid"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_arid("S00_AXI_arid"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rid("S00_AXI_rid"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), S01_AXI_awid("S01_AXI_awid"), S01_AXI_awaddr("S01_AXI_awaddr"), S01_AXI_awlen("S01_AXI_awlen"), S01_AXI_awsize("S01_AXI_awsize"), S01_AXI_awburst("S01_AXI_awburst"), S01_AXI_awlock("S01_AXI_awlock"), S01_AXI_awcache("S01_AXI_awcache"), S01_AXI_awprot("S01_AXI_awprot"), S01_AXI_awregion("S01_AXI_awregion"), S01_AXI_awqos("S01_AXI_awqos"), S01_AXI_awuser("S01_AXI_awuser"), S01_AXI_awvalid("S01_AXI_awvalid"), S01_AXI_awready("S01_AXI_awready"), S01_AXI_wid("S01_AXI_wid"), S01_AXI_wdata("S01_AXI_wdata"), S01_AXI_wstrb("S01_AXI_wstrb"), S01_AXI_wlast("S01_AXI_wlast"), S01_AXI_wuser("S01_AXI_wuser"), S01_AXI_wvalid("S01_AXI_wvalid"), S01_AXI_wready("S01_AXI_wready"), S01_AXI_bid("S01_AXI_bid"), S01_AXI_bresp("S01_AXI_bresp"), S01_AXI_buser("S01_AXI_buser"), S01_AXI_bvalid("S01_AXI_bvalid"), S01_AXI_bready("S01_AXI_bready"), S01_AXI_arid("S01_AXI_arid"), S01_AXI_araddr("S01_AXI_araddr"), S01_AXI_arlen("S01_AXI_arlen"), S01_AXI_arsize("S01_AXI_arsize"), S01_AXI_arburst("S01_AXI_arburst"), S01_AXI_arlock("S01_AXI_arlock"), S01_AXI_arcache("S01_AXI_arcache"), S01_AXI_arprot("S01_AXI_arprot"), S01_AXI_arregion("S01_AXI_arregion"), S01_AXI_arqos("S01_AXI_arqos"), S01_AXI_aruser("S01_AXI_aruser"), S01_AXI_arvalid("S01_AXI_arvalid"), S01_AXI_arready("S01_AXI_arready"), S01_AXI_rid("S01_AXI_rid"), S01_AXI_rdata("S01_AXI_rdata"), S01_AXI_rresp("S01_AXI_rresp"), S01_AXI_rlast("S01_AXI_rlast"), S01_AXI_ruser("S01_AXI_ruser"), S01_AXI_rvalid("S01_AXI_rvalid"), S01_AXI_rready("S01_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlen_converter = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlen_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_S01_AXI_transactor = NULL;
  mp_S01_AXI_awid_converter = NULL;
  mp_S01_AXI_awaddr_converter = NULL;
  mp_S01_AXI_awlen_converter = NULL;
  mp_S01_AXI_awuser_converter = NULL;
  mp_S01_AXI_awvalid_converter = NULL;
  mp_S01_AXI_awready_converter = NULL;
  mp_S01_AXI_wdata_converter = NULL;
  mp_S01_AXI_wstrb_converter = NULL;
  mp_S01_AXI_wlast_converter = NULL;
  mp_S01_AXI_wuser_converter = NULL;
  mp_S01_AXI_wvalid_converter = NULL;
  mp_S01_AXI_wready_converter = NULL;
  mp_S01_AXI_bid_converter = NULL;
  mp_S01_AXI_buser_converter = NULL;
  mp_S01_AXI_bvalid_converter = NULL;
  mp_S01_AXI_bready_converter = NULL;
  mp_S01_AXI_arid_converter = NULL;
  mp_S01_AXI_araddr_converter = NULL;
  mp_S01_AXI_arlen_converter = NULL;
  mp_S01_AXI_aruser_converter = NULL;
  mp_S01_AXI_arvalid_converter = NULL;
  mp_S01_AXI_arready_converter = NULL;
  mp_S01_AXI_rid_converter = NULL;
  mp_S01_AXI_rdata_converter = NULL;
  mp_S01_AXI_rlast_converter = NULL;
  mp_S01_AXI_ruser_converter = NULL;
  mp_S01_AXI_rvalid_converter = NULL;
  mp_S01_AXI_rready_converter = NULL;
  mp_M00_AXI_transactor = NULL;

  // initialize socket stubs

}

void design_1_smartconnect_0_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI3");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWID(S00_AXI_awid);
    mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
    mp_S00_AXI_awlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_awlen_converter");
    mp_S00_AXI_awlen_converter->vector_in(S00_AXI_awlen);
    mp_S00_AXI_awlen_converter->vector_out(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWLEN(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
    mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
    mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_awlock_converter");
    mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
    mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
    mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
    mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
    mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
    mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
    mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
    mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
    mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
    mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
    mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
    mp_S00_AXI_transactor->BID(S00_AXI_bid);
    mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
    mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
    mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
    mp_S00_AXI_transactor->ARID(S00_AXI_arid);
    mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
    mp_S00_AXI_arlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_arlen_converter");
    mp_S00_AXI_arlen_converter->vector_in(S00_AXI_arlen);
    mp_S00_AXI_arlen_converter->vector_out(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARLEN(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
    mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
    mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_arlock_converter");
    mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
    mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
    mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
    mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
    mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
    mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
    mp_S00_AXI_transactor->RID(S00_AXI_rid);
    mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
    mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
    mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
    mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
    mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'S01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "S01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S01_AXI' transactor parameters
    xsc::common_cpp::properties S01_AXI_transactor_param_props;
    S01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S01_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    S01_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S01_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    S01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    S01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    S01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    S01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S01_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    S01_AXI_transactor_param_props.addString("PROTOCOL", "");
    S01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S01_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_S01_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,1,1,1,1,1,1>("S01_AXI_transactor", S01_AXI_transactor_param_props);

    // S01_AXI' transactor ports

    mp_S01_AXI_awid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awid_converter");
    mp_S01_AXI_awid_converter->scalar_in(S01_AXI_awid);
    mp_S01_AXI_awid_converter->vector_out(m_S01_AXI_awid_converter_signal);
    mp_S01_AXI_transactor->AWID(m_S01_AXI_awid_converter_signal);
    mp_S01_AXI_awaddr_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_awaddr_converter");
    mp_S01_AXI_awaddr_converter->scalar_in(S01_AXI_awaddr);
    mp_S01_AXI_awaddr_converter->vector_out(m_S01_AXI_awaddr_converter_signal);
    mp_S01_AXI_transactor->AWADDR(m_S01_AXI_awaddr_converter_signal);
    mp_S01_AXI_awlen_converter = new xsc::common::scalar2vectorN_converter<8>("S01_AXI_awlen_converter");
    mp_S01_AXI_awlen_converter->scalar_in(S01_AXI_awlen);
    mp_S01_AXI_awlen_converter->vector_out(m_S01_AXI_awlen_converter_signal);
    mp_S01_AXI_transactor->AWLEN(m_S01_AXI_awlen_converter_signal);
    mp_S01_AXI_transactor->AWSIZE(S01_AXI_awsize);
    mp_S01_AXI_transactor->AWBURST(S01_AXI_awburst);
    mp_S01_AXI_transactor->AWLOCK(S01_AXI_awlock);
    mp_S01_AXI_transactor->AWCACHE(S01_AXI_awcache);
    mp_S01_AXI_transactor->AWPROT(S01_AXI_awprot);
    mp_S01_AXI_transactor->AWREGION(S01_AXI_awregion);
    mp_S01_AXI_transactor->AWQOS(S01_AXI_awqos);
    mp_S01_AXI_awuser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awuser_converter");
    mp_S01_AXI_awuser_converter->scalar_in(S01_AXI_awuser);
    mp_S01_AXI_awuser_converter->vector_out(m_S01_AXI_awuser_converter_signal);
    mp_S01_AXI_transactor->AWUSER(m_S01_AXI_awuser_converter_signal);
    mp_S01_AXI_awvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_awvalid_converter");
    mp_S01_AXI_awvalid_converter->vector_in(S01_AXI_awvalid);
    mp_S01_AXI_awvalid_converter->scalar_out(m_S01_AXI_awvalid_converter_signal);
    mp_S01_AXI_transactor->AWVALID(m_S01_AXI_awvalid_converter_signal);
    mp_S01_AXI_awready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awready_converter");
    mp_S01_AXI_awready_converter->scalar_in(m_S01_AXI_awready_converter_signal);
    mp_S01_AXI_awready_converter->vector_out(S01_AXI_awready);
    mp_S01_AXI_transactor->AWREADY(m_S01_AXI_awready_converter_signal);
    mp_S01_AXI_wdata_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_wdata_converter");
    mp_S01_AXI_wdata_converter->scalar_in(S01_AXI_wdata);
    mp_S01_AXI_wdata_converter->vector_out(m_S01_AXI_wdata_converter_signal);
    mp_S01_AXI_transactor->WDATA(m_S01_AXI_wdata_converter_signal);
    mp_S01_AXI_wstrb_converter = new xsc::common::scalar2vectorN_converter<4>("S01_AXI_wstrb_converter");
    mp_S01_AXI_wstrb_converter->scalar_in(S01_AXI_wstrb);
    mp_S01_AXI_wstrb_converter->vector_out(m_S01_AXI_wstrb_converter_signal);
    mp_S01_AXI_transactor->WSTRB(m_S01_AXI_wstrb_converter_signal);
    mp_S01_AXI_wlast_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_wlast_converter");
    mp_S01_AXI_wlast_converter->vector_in(S01_AXI_wlast);
    mp_S01_AXI_wlast_converter->scalar_out(m_S01_AXI_wlast_converter_signal);
    mp_S01_AXI_transactor->WLAST(m_S01_AXI_wlast_converter_signal);
    mp_S01_AXI_wuser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_wuser_converter");
    mp_S01_AXI_wuser_converter->scalar_in(S01_AXI_wuser);
    mp_S01_AXI_wuser_converter->vector_out(m_S01_AXI_wuser_converter_signal);
    mp_S01_AXI_transactor->WUSER(m_S01_AXI_wuser_converter_signal);
    mp_S01_AXI_wvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_wvalid_converter");
    mp_S01_AXI_wvalid_converter->vector_in(S01_AXI_wvalid);
    mp_S01_AXI_wvalid_converter->scalar_out(m_S01_AXI_wvalid_converter_signal);
    mp_S01_AXI_transactor->WVALID(m_S01_AXI_wvalid_converter_signal);
    mp_S01_AXI_wready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_wready_converter");
    mp_S01_AXI_wready_converter->scalar_in(m_S01_AXI_wready_converter_signal);
    mp_S01_AXI_wready_converter->vector_out(S01_AXI_wready);
    mp_S01_AXI_transactor->WREADY(m_S01_AXI_wready_converter_signal);
    mp_S01_AXI_bid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_bid_converter");
    mp_S01_AXI_bid_converter->vector_in(m_S01_AXI_bid_converter_signal);
    mp_S01_AXI_bid_converter->scalar_out(S01_AXI_bid);
    mp_S01_AXI_transactor->BID(m_S01_AXI_bid_converter_signal);
    mp_S01_AXI_transactor->BRESP(S01_AXI_bresp);
    mp_S01_AXI_buser_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_buser_converter");
    mp_S01_AXI_buser_converter->vector_in(m_S01_AXI_buser_converter_signal);
    mp_S01_AXI_buser_converter->scalar_out(S01_AXI_buser);
    mp_S01_AXI_transactor->BUSER(m_S01_AXI_buser_converter_signal);
    mp_S01_AXI_bvalid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_bvalid_converter");
    mp_S01_AXI_bvalid_converter->scalar_in(m_S01_AXI_bvalid_converter_signal);
    mp_S01_AXI_bvalid_converter->vector_out(S01_AXI_bvalid);
    mp_S01_AXI_transactor->BVALID(m_S01_AXI_bvalid_converter_signal);
    mp_S01_AXI_bready_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_bready_converter");
    mp_S01_AXI_bready_converter->vector_in(S01_AXI_bready);
    mp_S01_AXI_bready_converter->scalar_out(m_S01_AXI_bready_converter_signal);
    mp_S01_AXI_transactor->BREADY(m_S01_AXI_bready_converter_signal);
    mp_S01_AXI_arid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_arid_converter");
    mp_S01_AXI_arid_converter->scalar_in(S01_AXI_arid);
    mp_S01_AXI_arid_converter->vector_out(m_S01_AXI_arid_converter_signal);
    mp_S01_AXI_transactor->ARID(m_S01_AXI_arid_converter_signal);
    mp_S01_AXI_araddr_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_araddr_converter");
    mp_S01_AXI_araddr_converter->scalar_in(S01_AXI_araddr);
    mp_S01_AXI_araddr_converter->vector_out(m_S01_AXI_araddr_converter_signal);
    mp_S01_AXI_transactor->ARADDR(m_S01_AXI_araddr_converter_signal);
    mp_S01_AXI_arlen_converter = new xsc::common::scalar2vectorN_converter<8>("S01_AXI_arlen_converter");
    mp_S01_AXI_arlen_converter->scalar_in(S01_AXI_arlen);
    mp_S01_AXI_arlen_converter->vector_out(m_S01_AXI_arlen_converter_signal);
    mp_S01_AXI_transactor->ARLEN(m_S01_AXI_arlen_converter_signal);
    mp_S01_AXI_transactor->ARSIZE(S01_AXI_arsize);
    mp_S01_AXI_transactor->ARBURST(S01_AXI_arburst);
    mp_S01_AXI_transactor->ARLOCK(S01_AXI_arlock);
    mp_S01_AXI_transactor->ARCACHE(S01_AXI_arcache);
    mp_S01_AXI_transactor->ARPROT(S01_AXI_arprot);
    mp_S01_AXI_transactor->ARREGION(S01_AXI_arregion);
    mp_S01_AXI_transactor->ARQOS(S01_AXI_arqos);
    mp_S01_AXI_aruser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_aruser_converter");
    mp_S01_AXI_aruser_converter->scalar_in(S01_AXI_aruser);
    mp_S01_AXI_aruser_converter->vector_out(m_S01_AXI_aruser_converter_signal);
    mp_S01_AXI_transactor->ARUSER(m_S01_AXI_aruser_converter_signal);
    mp_S01_AXI_arvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_arvalid_converter");
    mp_S01_AXI_arvalid_converter->vector_in(S01_AXI_arvalid);
    mp_S01_AXI_arvalid_converter->scalar_out(m_S01_AXI_arvalid_converter_signal);
    mp_S01_AXI_transactor->ARVALID(m_S01_AXI_arvalid_converter_signal);
    mp_S01_AXI_arready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_arready_converter");
    mp_S01_AXI_arready_converter->scalar_in(m_S01_AXI_arready_converter_signal);
    mp_S01_AXI_arready_converter->vector_out(S01_AXI_arready);
    mp_S01_AXI_transactor->ARREADY(m_S01_AXI_arready_converter_signal);
    mp_S01_AXI_rid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_rid_converter");
    mp_S01_AXI_rid_converter->vector_in(m_S01_AXI_rid_converter_signal);
    mp_S01_AXI_rid_converter->scalar_out(S01_AXI_rid);
    mp_S01_AXI_transactor->RID(m_S01_AXI_rid_converter_signal);
    mp_S01_AXI_rdata_converter = new xsc::common::vectorN2scalar_converter<32>("S01_AXI_rdata_converter");
    mp_S01_AXI_rdata_converter->vector_in(m_S01_AXI_rdata_converter_signal);
    mp_S01_AXI_rdata_converter->scalar_out(S01_AXI_rdata);
    mp_S01_AXI_transactor->RDATA(m_S01_AXI_rdata_converter_signal);
    mp_S01_AXI_transactor->RRESP(S01_AXI_rresp);
    mp_S01_AXI_rlast_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_rlast_converter");
    mp_S01_AXI_rlast_converter->scalar_in(m_S01_AXI_rlast_converter_signal);
    mp_S01_AXI_rlast_converter->vector_out(S01_AXI_rlast);
    mp_S01_AXI_transactor->RLAST(m_S01_AXI_rlast_converter_signal);
    mp_S01_AXI_ruser_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_ruser_converter");
    mp_S01_AXI_ruser_converter->vector_in(m_S01_AXI_ruser_converter_signal);
    mp_S01_AXI_ruser_converter->scalar_out(S01_AXI_ruser);
    mp_S01_AXI_transactor->RUSER(m_S01_AXI_ruser_converter_signal);
    mp_S01_AXI_rvalid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_rvalid_converter");
    mp_S01_AXI_rvalid_converter->scalar_in(m_S01_AXI_rvalid_converter_signal);
    mp_S01_AXI_rvalid_converter->vector_out(S01_AXI_rvalid);
    mp_S01_AXI_transactor->RVALID(m_S01_AXI_rvalid_converter_signal);
    mp_S01_AXI_rready_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_rready_converter");
    mp_S01_AXI_rready_converter->vector_in(S01_AXI_rready);
    mp_S01_AXI_rready_converter->scalar_out(m_S01_AXI_rready_converter_signal);
    mp_S01_AXI_transactor->RREADY(m_S01_AXI_rready_converter_signal);
    mp_S01_AXI_transactor->CLK(aclk);
    mp_S01_AXI_transactor->RST(aresetn);

    // S01_AXI' transactor sockets

    mp_impl->S01_AXI_tlm_aximm_read_socket->bind(*(mp_S01_AXI_transactor->rd_socket));
    mp_impl->S01_AXI_tlm_aximm_write_socket->bind(*(mp_S01_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "5");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,5,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
    mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
    mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
    mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
    mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
    mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
    mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
    mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
    mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
    mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
    mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
    mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
    mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
    mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
    mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
    mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
    mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
    mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
    mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // RIVIERA




#ifdef VCSSYSTEMC
design_1_smartconnect_0_0::design_1_smartconnect_0_0(const sc_core::sc_module_name& nm) : design_1_smartconnect_0_0_sc(nm),  aclk("aclk"), aresetn("aresetn"), S00_AXI_awid("S00_AXI_awid"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wid("S00_AXI_wid"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bid("S00_AXI_bid"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_arid("S00_AXI_arid"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rid("S00_AXI_rid"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), S01_AXI_awid("S01_AXI_awid"), S01_AXI_awaddr("S01_AXI_awaddr"), S01_AXI_awlen("S01_AXI_awlen"), S01_AXI_awsize("S01_AXI_awsize"), S01_AXI_awburst("S01_AXI_awburst"), S01_AXI_awlock("S01_AXI_awlock"), S01_AXI_awcache("S01_AXI_awcache"), S01_AXI_awprot("S01_AXI_awprot"), S01_AXI_awregion("S01_AXI_awregion"), S01_AXI_awqos("S01_AXI_awqos"), S01_AXI_awuser("S01_AXI_awuser"), S01_AXI_awvalid("S01_AXI_awvalid"), S01_AXI_awready("S01_AXI_awready"), S01_AXI_wid("S01_AXI_wid"), S01_AXI_wdata("S01_AXI_wdata"), S01_AXI_wstrb("S01_AXI_wstrb"), S01_AXI_wlast("S01_AXI_wlast"), S01_AXI_wuser("S01_AXI_wuser"), S01_AXI_wvalid("S01_AXI_wvalid"), S01_AXI_wready("S01_AXI_wready"), S01_AXI_bid("S01_AXI_bid"), S01_AXI_bresp("S01_AXI_bresp"), S01_AXI_buser("S01_AXI_buser"), S01_AXI_bvalid("S01_AXI_bvalid"), S01_AXI_bready("S01_AXI_bready"), S01_AXI_arid("S01_AXI_arid"), S01_AXI_araddr("S01_AXI_araddr"), S01_AXI_arlen("S01_AXI_arlen"), S01_AXI_arsize("S01_AXI_arsize"), S01_AXI_arburst("S01_AXI_arburst"), S01_AXI_arlock("S01_AXI_arlock"), S01_AXI_arcache("S01_AXI_arcache"), S01_AXI_arprot("S01_AXI_arprot"), S01_AXI_arregion("S01_AXI_arregion"), S01_AXI_arqos("S01_AXI_arqos"), S01_AXI_aruser("S01_AXI_aruser"), S01_AXI_arvalid("S01_AXI_arvalid"), S01_AXI_arready("S01_AXI_arready"), S01_AXI_rid("S01_AXI_rid"), S01_AXI_rdata("S01_AXI_rdata"), S01_AXI_rresp("S01_AXI_rresp"), S01_AXI_rlast("S01_AXI_rlast"), S01_AXI_ruser("S01_AXI_ruser"), S01_AXI_rvalid("S01_AXI_rvalid"), S01_AXI_rready("S01_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready")
{
  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlen_converter = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlen_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_S01_AXI_transactor = NULL;
  mp_S01_AXI_awid_converter = NULL;
  mp_S01_AXI_awaddr_converter = NULL;
  mp_S01_AXI_awlen_converter = NULL;
  mp_S01_AXI_awuser_converter = NULL;
  mp_S01_AXI_awvalid_converter = NULL;
  mp_S01_AXI_awready_converter = NULL;
  mp_S01_AXI_wdata_converter = NULL;
  mp_S01_AXI_wstrb_converter = NULL;
  mp_S01_AXI_wlast_converter = NULL;
  mp_S01_AXI_wuser_converter = NULL;
  mp_S01_AXI_wvalid_converter = NULL;
  mp_S01_AXI_wready_converter = NULL;
  mp_S01_AXI_bid_converter = NULL;
  mp_S01_AXI_buser_converter = NULL;
  mp_S01_AXI_bvalid_converter = NULL;
  mp_S01_AXI_bready_converter = NULL;
  mp_S01_AXI_arid_converter = NULL;
  mp_S01_AXI_araddr_converter = NULL;
  mp_S01_AXI_arlen_converter = NULL;
  mp_S01_AXI_aruser_converter = NULL;
  mp_S01_AXI_arvalid_converter = NULL;
  mp_S01_AXI_arready_converter = NULL;
  mp_S01_AXI_rid_converter = NULL;
  mp_S01_AXI_rdata_converter = NULL;
  mp_S01_AXI_rlast_converter = NULL;
  mp_S01_AXI_ruser_converter = NULL;
  mp_S01_AXI_rvalid_converter = NULL;
  mp_S01_AXI_rready_converter = NULL;
  mp_M00_AXI_transactor = NULL;

  // Instantiate Socket Stubs

  // configure S00_AXI_transactor
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI3");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);
  mp_S00_AXI_transactor->AWID(S00_AXI_awid);
  mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
  mp_S00_AXI_awlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_awlen_converter");
  mp_S00_AXI_awlen_converter->vector_in(S00_AXI_awlen);
  mp_S00_AXI_awlen_converter->vector_out(m_S00_AXI_awlen_converter_signal);
  mp_S00_AXI_transactor->AWLEN(m_S00_AXI_awlen_converter_signal);
  mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
  mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
  mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_awlock_converter");
  mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
  mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
  mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
  mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
  mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
  mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
  mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
  mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
  mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
  mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
  mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
  mp_S00_AXI_transactor->BID(S00_AXI_bid);
  mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
  mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
  mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
  mp_S00_AXI_transactor->ARID(S00_AXI_arid);
  mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
  mp_S00_AXI_arlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_arlen_converter");
  mp_S00_AXI_arlen_converter->vector_in(S00_AXI_arlen);
  mp_S00_AXI_arlen_converter->vector_out(m_S00_AXI_arlen_converter_signal);
  mp_S00_AXI_transactor->ARLEN(m_S00_AXI_arlen_converter_signal);
  mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
  mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
  mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_arlock_converter");
  mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
  mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
  mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
  mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
  mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
  mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
  mp_S00_AXI_transactor->RID(S00_AXI_rid);
  mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
  mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
  mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
  mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
  mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
  mp_S00_AXI_transactor->CLK(aclk);
  mp_S00_AXI_transactor->RST(aresetn);
  // configure S01_AXI_transactor
    xsc::common_cpp::properties S01_AXI_transactor_param_props;
    S01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S01_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    S01_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S01_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    S01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    S01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    S01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    S01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S01_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    S01_AXI_transactor_param_props.addString("PROTOCOL", "");
    S01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S01_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_S01_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,1,1,1,1,1,1>("S01_AXI_transactor", S01_AXI_transactor_param_props);
  mp_S01_AXI_awid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awid_converter");
  mp_S01_AXI_awid_converter->scalar_in(S01_AXI_awid);
  mp_S01_AXI_awid_converter->vector_out(m_S01_AXI_awid_converter_signal);
  mp_S01_AXI_transactor->AWID(m_S01_AXI_awid_converter_signal);
  mp_S01_AXI_awaddr_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_awaddr_converter");
  mp_S01_AXI_awaddr_converter->scalar_in(S01_AXI_awaddr);
  mp_S01_AXI_awaddr_converter->vector_out(m_S01_AXI_awaddr_converter_signal);
  mp_S01_AXI_transactor->AWADDR(m_S01_AXI_awaddr_converter_signal);
  mp_S01_AXI_awlen_converter = new xsc::common::scalar2vectorN_converter<8>("S01_AXI_awlen_converter");
  mp_S01_AXI_awlen_converter->scalar_in(S01_AXI_awlen);
  mp_S01_AXI_awlen_converter->vector_out(m_S01_AXI_awlen_converter_signal);
  mp_S01_AXI_transactor->AWLEN(m_S01_AXI_awlen_converter_signal);
  mp_S01_AXI_transactor->AWSIZE(S01_AXI_awsize);
  mp_S01_AXI_transactor->AWBURST(S01_AXI_awburst);
  mp_S01_AXI_transactor->AWLOCK(S01_AXI_awlock);
  mp_S01_AXI_transactor->AWCACHE(S01_AXI_awcache);
  mp_S01_AXI_transactor->AWPROT(S01_AXI_awprot);
  mp_S01_AXI_transactor->AWREGION(S01_AXI_awregion);
  mp_S01_AXI_transactor->AWQOS(S01_AXI_awqos);
  mp_S01_AXI_awuser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awuser_converter");
  mp_S01_AXI_awuser_converter->scalar_in(S01_AXI_awuser);
  mp_S01_AXI_awuser_converter->vector_out(m_S01_AXI_awuser_converter_signal);
  mp_S01_AXI_transactor->AWUSER(m_S01_AXI_awuser_converter_signal);
  mp_S01_AXI_awvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_awvalid_converter");
  mp_S01_AXI_awvalid_converter->vector_in(S01_AXI_awvalid);
  mp_S01_AXI_awvalid_converter->scalar_out(m_S01_AXI_awvalid_converter_signal);
  mp_S01_AXI_transactor->AWVALID(m_S01_AXI_awvalid_converter_signal);
  mp_S01_AXI_awready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awready_converter");
  mp_S01_AXI_awready_converter->scalar_in(m_S01_AXI_awready_converter_signal);
  mp_S01_AXI_awready_converter->vector_out(S01_AXI_awready);
  mp_S01_AXI_transactor->AWREADY(m_S01_AXI_awready_converter_signal);
  mp_S01_AXI_wdata_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_wdata_converter");
  mp_S01_AXI_wdata_converter->scalar_in(S01_AXI_wdata);
  mp_S01_AXI_wdata_converter->vector_out(m_S01_AXI_wdata_converter_signal);
  mp_S01_AXI_transactor->WDATA(m_S01_AXI_wdata_converter_signal);
  mp_S01_AXI_wstrb_converter = new xsc::common::scalar2vectorN_converter<4>("S01_AXI_wstrb_converter");
  mp_S01_AXI_wstrb_converter->scalar_in(S01_AXI_wstrb);
  mp_S01_AXI_wstrb_converter->vector_out(m_S01_AXI_wstrb_converter_signal);
  mp_S01_AXI_transactor->WSTRB(m_S01_AXI_wstrb_converter_signal);
  mp_S01_AXI_wlast_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_wlast_converter");
  mp_S01_AXI_wlast_converter->vector_in(S01_AXI_wlast);
  mp_S01_AXI_wlast_converter->scalar_out(m_S01_AXI_wlast_converter_signal);
  mp_S01_AXI_transactor->WLAST(m_S01_AXI_wlast_converter_signal);
  mp_S01_AXI_wuser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_wuser_converter");
  mp_S01_AXI_wuser_converter->scalar_in(S01_AXI_wuser);
  mp_S01_AXI_wuser_converter->vector_out(m_S01_AXI_wuser_converter_signal);
  mp_S01_AXI_transactor->WUSER(m_S01_AXI_wuser_converter_signal);
  mp_S01_AXI_wvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_wvalid_converter");
  mp_S01_AXI_wvalid_converter->vector_in(S01_AXI_wvalid);
  mp_S01_AXI_wvalid_converter->scalar_out(m_S01_AXI_wvalid_converter_signal);
  mp_S01_AXI_transactor->WVALID(m_S01_AXI_wvalid_converter_signal);
  mp_S01_AXI_wready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_wready_converter");
  mp_S01_AXI_wready_converter->scalar_in(m_S01_AXI_wready_converter_signal);
  mp_S01_AXI_wready_converter->vector_out(S01_AXI_wready);
  mp_S01_AXI_transactor->WREADY(m_S01_AXI_wready_converter_signal);
  mp_S01_AXI_bid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_bid_converter");
  mp_S01_AXI_bid_converter->vector_in(m_S01_AXI_bid_converter_signal);
  mp_S01_AXI_bid_converter->scalar_out(S01_AXI_bid);
  mp_S01_AXI_transactor->BID(m_S01_AXI_bid_converter_signal);
  mp_S01_AXI_transactor->BRESP(S01_AXI_bresp);
  mp_S01_AXI_buser_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_buser_converter");
  mp_S01_AXI_buser_converter->vector_in(m_S01_AXI_buser_converter_signal);
  mp_S01_AXI_buser_converter->scalar_out(S01_AXI_buser);
  mp_S01_AXI_transactor->BUSER(m_S01_AXI_buser_converter_signal);
  mp_S01_AXI_bvalid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_bvalid_converter");
  mp_S01_AXI_bvalid_converter->scalar_in(m_S01_AXI_bvalid_converter_signal);
  mp_S01_AXI_bvalid_converter->vector_out(S01_AXI_bvalid);
  mp_S01_AXI_transactor->BVALID(m_S01_AXI_bvalid_converter_signal);
  mp_S01_AXI_bready_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_bready_converter");
  mp_S01_AXI_bready_converter->vector_in(S01_AXI_bready);
  mp_S01_AXI_bready_converter->scalar_out(m_S01_AXI_bready_converter_signal);
  mp_S01_AXI_transactor->BREADY(m_S01_AXI_bready_converter_signal);
  mp_S01_AXI_arid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_arid_converter");
  mp_S01_AXI_arid_converter->scalar_in(S01_AXI_arid);
  mp_S01_AXI_arid_converter->vector_out(m_S01_AXI_arid_converter_signal);
  mp_S01_AXI_transactor->ARID(m_S01_AXI_arid_converter_signal);
  mp_S01_AXI_araddr_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_araddr_converter");
  mp_S01_AXI_araddr_converter->scalar_in(S01_AXI_araddr);
  mp_S01_AXI_araddr_converter->vector_out(m_S01_AXI_araddr_converter_signal);
  mp_S01_AXI_transactor->ARADDR(m_S01_AXI_araddr_converter_signal);
  mp_S01_AXI_arlen_converter = new xsc::common::scalar2vectorN_converter<8>("S01_AXI_arlen_converter");
  mp_S01_AXI_arlen_converter->scalar_in(S01_AXI_arlen);
  mp_S01_AXI_arlen_converter->vector_out(m_S01_AXI_arlen_converter_signal);
  mp_S01_AXI_transactor->ARLEN(m_S01_AXI_arlen_converter_signal);
  mp_S01_AXI_transactor->ARSIZE(S01_AXI_arsize);
  mp_S01_AXI_transactor->ARBURST(S01_AXI_arburst);
  mp_S01_AXI_transactor->ARLOCK(S01_AXI_arlock);
  mp_S01_AXI_transactor->ARCACHE(S01_AXI_arcache);
  mp_S01_AXI_transactor->ARPROT(S01_AXI_arprot);
  mp_S01_AXI_transactor->ARREGION(S01_AXI_arregion);
  mp_S01_AXI_transactor->ARQOS(S01_AXI_arqos);
  mp_S01_AXI_aruser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_aruser_converter");
  mp_S01_AXI_aruser_converter->scalar_in(S01_AXI_aruser);
  mp_S01_AXI_aruser_converter->vector_out(m_S01_AXI_aruser_converter_signal);
  mp_S01_AXI_transactor->ARUSER(m_S01_AXI_aruser_converter_signal);
  mp_S01_AXI_arvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_arvalid_converter");
  mp_S01_AXI_arvalid_converter->vector_in(S01_AXI_arvalid);
  mp_S01_AXI_arvalid_converter->scalar_out(m_S01_AXI_arvalid_converter_signal);
  mp_S01_AXI_transactor->ARVALID(m_S01_AXI_arvalid_converter_signal);
  mp_S01_AXI_arready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_arready_converter");
  mp_S01_AXI_arready_converter->scalar_in(m_S01_AXI_arready_converter_signal);
  mp_S01_AXI_arready_converter->vector_out(S01_AXI_arready);
  mp_S01_AXI_transactor->ARREADY(m_S01_AXI_arready_converter_signal);
  mp_S01_AXI_rid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_rid_converter");
  mp_S01_AXI_rid_converter->vector_in(m_S01_AXI_rid_converter_signal);
  mp_S01_AXI_rid_converter->scalar_out(S01_AXI_rid);
  mp_S01_AXI_transactor->RID(m_S01_AXI_rid_converter_signal);
  mp_S01_AXI_rdata_converter = new xsc::common::vectorN2scalar_converter<32>("S01_AXI_rdata_converter");
  mp_S01_AXI_rdata_converter->vector_in(m_S01_AXI_rdata_converter_signal);
  mp_S01_AXI_rdata_converter->scalar_out(S01_AXI_rdata);
  mp_S01_AXI_transactor->RDATA(m_S01_AXI_rdata_converter_signal);
  mp_S01_AXI_transactor->RRESP(S01_AXI_rresp);
  mp_S01_AXI_rlast_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_rlast_converter");
  mp_S01_AXI_rlast_converter->scalar_in(m_S01_AXI_rlast_converter_signal);
  mp_S01_AXI_rlast_converter->vector_out(S01_AXI_rlast);
  mp_S01_AXI_transactor->RLAST(m_S01_AXI_rlast_converter_signal);
  mp_S01_AXI_ruser_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_ruser_converter");
  mp_S01_AXI_ruser_converter->vector_in(m_S01_AXI_ruser_converter_signal);
  mp_S01_AXI_ruser_converter->scalar_out(S01_AXI_ruser);
  mp_S01_AXI_transactor->RUSER(m_S01_AXI_ruser_converter_signal);
  mp_S01_AXI_rvalid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_rvalid_converter");
  mp_S01_AXI_rvalid_converter->scalar_in(m_S01_AXI_rvalid_converter_signal);
  mp_S01_AXI_rvalid_converter->vector_out(S01_AXI_rvalid);
  mp_S01_AXI_transactor->RVALID(m_S01_AXI_rvalid_converter_signal);
  mp_S01_AXI_rready_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_rready_converter");
  mp_S01_AXI_rready_converter->vector_in(S01_AXI_rready);
  mp_S01_AXI_rready_converter->scalar_out(m_S01_AXI_rready_converter_signal);
  mp_S01_AXI_transactor->RREADY(m_S01_AXI_rready_converter_signal);
  mp_S01_AXI_transactor->CLK(aclk);
  mp_S01_AXI_transactor->RST(aresetn);
  // configure M00_AXI_transactor
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "5");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,5,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);
  mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
  mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
  mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
  mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
  mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
  mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
  mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
  mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
  mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
  mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
  mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
  mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
  mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
  mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
  mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
  mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
  mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
  mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
  mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
  mp_M00_AXI_transactor->CLK(aclk);
  mp_M00_AXI_transactor->RST(aresetn);

  // initialize transactors stubs
  S00_AXI_transactor_target_wr_socket_stub = nullptr;
  S00_AXI_transactor_target_rd_socket_stub = nullptr;
  S01_AXI_transactor_target_wr_socket_stub = nullptr;
  S01_AXI_transactor_target_rd_socket_stub = nullptr;
  M00_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M00_AXI_transactor_initiator_rd_socket_stub = nullptr;

}

void design_1_smartconnect_0_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "S00_AXI_TLM_MODE") != 1)
  {
    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  
  }
  else
  {
    S00_AXI_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S00_AXI_transactor_target_wr_socket_stub->bind(*(mp_S00_AXI_transactor->wr_socket));
    S00_AXI_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S00_AXI_transactor_target_rd_socket_stub->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_S00_AXI_transactor->disable_transactor();
  }

  // configure 'S01_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "S01_AXI_TLM_MODE") != 1)
  {
    mp_impl->S01_AXI_tlm_aximm_read_socket->bind(*(mp_S01_AXI_transactor->rd_socket));
    mp_impl->S01_AXI_tlm_aximm_write_socket->bind(*(mp_S01_AXI_transactor->wr_socket));
  
  }
  else
  {
    S01_AXI_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S01_AXI_transactor_target_wr_socket_stub->bind(*(mp_S01_AXI_transactor->wr_socket));
    S01_AXI_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S01_AXI_transactor_target_rd_socket_stub->bind(*(mp_S01_AXI_transactor->rd_socket));
    mp_S01_AXI_transactor->disable_transactor();
  }

  // configure 'M00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "M00_AXI_TLM_MODE") != 1)
  {
    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  
  }
  else
  {
    M00_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M00_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M00_AXI_transactor->wr_socket));
    M00_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M00_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_M00_AXI_transactor->disable_transactor();
  }

}

#endif // VCSSYSTEMC




#ifdef MTI_SYSTEMC
design_1_smartconnect_0_0::design_1_smartconnect_0_0(const sc_core::sc_module_name& nm) : design_1_smartconnect_0_0_sc(nm),  aclk("aclk"), aresetn("aresetn"), S00_AXI_awid("S00_AXI_awid"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wid("S00_AXI_wid"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bid("S00_AXI_bid"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_arid("S00_AXI_arid"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rid("S00_AXI_rid"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), S01_AXI_awid("S01_AXI_awid"), S01_AXI_awaddr("S01_AXI_awaddr"), S01_AXI_awlen("S01_AXI_awlen"), S01_AXI_awsize("S01_AXI_awsize"), S01_AXI_awburst("S01_AXI_awburst"), S01_AXI_awlock("S01_AXI_awlock"), S01_AXI_awcache("S01_AXI_awcache"), S01_AXI_awprot("S01_AXI_awprot"), S01_AXI_awregion("S01_AXI_awregion"), S01_AXI_awqos("S01_AXI_awqos"), S01_AXI_awuser("S01_AXI_awuser"), S01_AXI_awvalid("S01_AXI_awvalid"), S01_AXI_awready("S01_AXI_awready"), S01_AXI_wid("S01_AXI_wid"), S01_AXI_wdata("S01_AXI_wdata"), S01_AXI_wstrb("S01_AXI_wstrb"), S01_AXI_wlast("S01_AXI_wlast"), S01_AXI_wuser("S01_AXI_wuser"), S01_AXI_wvalid("S01_AXI_wvalid"), S01_AXI_wready("S01_AXI_wready"), S01_AXI_bid("S01_AXI_bid"), S01_AXI_bresp("S01_AXI_bresp"), S01_AXI_buser("S01_AXI_buser"), S01_AXI_bvalid("S01_AXI_bvalid"), S01_AXI_bready("S01_AXI_bready"), S01_AXI_arid("S01_AXI_arid"), S01_AXI_araddr("S01_AXI_araddr"), S01_AXI_arlen("S01_AXI_arlen"), S01_AXI_arsize("S01_AXI_arsize"), S01_AXI_arburst("S01_AXI_arburst"), S01_AXI_arlock("S01_AXI_arlock"), S01_AXI_arcache("S01_AXI_arcache"), S01_AXI_arprot("S01_AXI_arprot"), S01_AXI_arregion("S01_AXI_arregion"), S01_AXI_arqos("S01_AXI_arqos"), S01_AXI_aruser("S01_AXI_aruser"), S01_AXI_arvalid("S01_AXI_arvalid"), S01_AXI_arready("S01_AXI_arready"), S01_AXI_rid("S01_AXI_rid"), S01_AXI_rdata("S01_AXI_rdata"), S01_AXI_rresp("S01_AXI_rresp"), S01_AXI_rlast("S01_AXI_rlast"), S01_AXI_ruser("S01_AXI_ruser"), S01_AXI_rvalid("S01_AXI_rvalid"), S01_AXI_rready("S01_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready")
{
  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlen_converter = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlen_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_S01_AXI_transactor = NULL;
  mp_S01_AXI_awid_converter = NULL;
  mp_S01_AXI_awaddr_converter = NULL;
  mp_S01_AXI_awlen_converter = NULL;
  mp_S01_AXI_awuser_converter = NULL;
  mp_S01_AXI_awvalid_converter = NULL;
  mp_S01_AXI_awready_converter = NULL;
  mp_S01_AXI_wdata_converter = NULL;
  mp_S01_AXI_wstrb_converter = NULL;
  mp_S01_AXI_wlast_converter = NULL;
  mp_S01_AXI_wuser_converter = NULL;
  mp_S01_AXI_wvalid_converter = NULL;
  mp_S01_AXI_wready_converter = NULL;
  mp_S01_AXI_bid_converter = NULL;
  mp_S01_AXI_buser_converter = NULL;
  mp_S01_AXI_bvalid_converter = NULL;
  mp_S01_AXI_bready_converter = NULL;
  mp_S01_AXI_arid_converter = NULL;
  mp_S01_AXI_araddr_converter = NULL;
  mp_S01_AXI_arlen_converter = NULL;
  mp_S01_AXI_aruser_converter = NULL;
  mp_S01_AXI_arvalid_converter = NULL;
  mp_S01_AXI_arready_converter = NULL;
  mp_S01_AXI_rid_converter = NULL;
  mp_S01_AXI_rdata_converter = NULL;
  mp_S01_AXI_rlast_converter = NULL;
  mp_S01_AXI_ruser_converter = NULL;
  mp_S01_AXI_rvalid_converter = NULL;
  mp_S01_AXI_rready_converter = NULL;
  mp_M00_AXI_transactor = NULL;

  // Instantiate Socket Stubs

  // configure S00_AXI_transactor
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI3");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);
  mp_S00_AXI_transactor->AWID(S00_AXI_awid);
  mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
  mp_S00_AXI_awlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_awlen_converter");
  mp_S00_AXI_awlen_converter->vector_in(S00_AXI_awlen);
  mp_S00_AXI_awlen_converter->vector_out(m_S00_AXI_awlen_converter_signal);
  mp_S00_AXI_transactor->AWLEN(m_S00_AXI_awlen_converter_signal);
  mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
  mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
  mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_awlock_converter");
  mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
  mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
  mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
  mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
  mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
  mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
  mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
  mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
  mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
  mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
  mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
  mp_S00_AXI_transactor->BID(S00_AXI_bid);
  mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
  mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
  mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
  mp_S00_AXI_transactor->ARID(S00_AXI_arid);
  mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
  mp_S00_AXI_arlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_arlen_converter");
  mp_S00_AXI_arlen_converter->vector_in(S00_AXI_arlen);
  mp_S00_AXI_arlen_converter->vector_out(m_S00_AXI_arlen_converter_signal);
  mp_S00_AXI_transactor->ARLEN(m_S00_AXI_arlen_converter_signal);
  mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
  mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
  mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_arlock_converter");
  mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
  mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
  mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
  mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
  mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
  mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
  mp_S00_AXI_transactor->RID(S00_AXI_rid);
  mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
  mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
  mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
  mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
  mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
  mp_S00_AXI_transactor->CLK(aclk);
  mp_S00_AXI_transactor->RST(aresetn);
  // configure S01_AXI_transactor
    xsc::common_cpp::properties S01_AXI_transactor_param_props;
    S01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S01_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    S01_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    S01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S01_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    S01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    S01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    S01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    S01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S01_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    S01_AXI_transactor_param_props.addString("PROTOCOL", "");
    S01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S01_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_S01_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,1,1,1,1,1,1>("S01_AXI_transactor", S01_AXI_transactor_param_props);
  mp_S01_AXI_awid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awid_converter");
  mp_S01_AXI_awid_converter->scalar_in(S01_AXI_awid);
  mp_S01_AXI_awid_converter->vector_out(m_S01_AXI_awid_converter_signal);
  mp_S01_AXI_transactor->AWID(m_S01_AXI_awid_converter_signal);
  mp_S01_AXI_awaddr_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_awaddr_converter");
  mp_S01_AXI_awaddr_converter->scalar_in(S01_AXI_awaddr);
  mp_S01_AXI_awaddr_converter->vector_out(m_S01_AXI_awaddr_converter_signal);
  mp_S01_AXI_transactor->AWADDR(m_S01_AXI_awaddr_converter_signal);
  mp_S01_AXI_awlen_converter = new xsc::common::scalar2vectorN_converter<8>("S01_AXI_awlen_converter");
  mp_S01_AXI_awlen_converter->scalar_in(S01_AXI_awlen);
  mp_S01_AXI_awlen_converter->vector_out(m_S01_AXI_awlen_converter_signal);
  mp_S01_AXI_transactor->AWLEN(m_S01_AXI_awlen_converter_signal);
  mp_S01_AXI_transactor->AWSIZE(S01_AXI_awsize);
  mp_S01_AXI_transactor->AWBURST(S01_AXI_awburst);
  mp_S01_AXI_transactor->AWLOCK(S01_AXI_awlock);
  mp_S01_AXI_transactor->AWCACHE(S01_AXI_awcache);
  mp_S01_AXI_transactor->AWPROT(S01_AXI_awprot);
  mp_S01_AXI_transactor->AWREGION(S01_AXI_awregion);
  mp_S01_AXI_transactor->AWQOS(S01_AXI_awqos);
  mp_S01_AXI_awuser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awuser_converter");
  mp_S01_AXI_awuser_converter->scalar_in(S01_AXI_awuser);
  mp_S01_AXI_awuser_converter->vector_out(m_S01_AXI_awuser_converter_signal);
  mp_S01_AXI_transactor->AWUSER(m_S01_AXI_awuser_converter_signal);
  mp_S01_AXI_awvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_awvalid_converter");
  mp_S01_AXI_awvalid_converter->vector_in(S01_AXI_awvalid);
  mp_S01_AXI_awvalid_converter->scalar_out(m_S01_AXI_awvalid_converter_signal);
  mp_S01_AXI_transactor->AWVALID(m_S01_AXI_awvalid_converter_signal);
  mp_S01_AXI_awready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_awready_converter");
  mp_S01_AXI_awready_converter->scalar_in(m_S01_AXI_awready_converter_signal);
  mp_S01_AXI_awready_converter->vector_out(S01_AXI_awready);
  mp_S01_AXI_transactor->AWREADY(m_S01_AXI_awready_converter_signal);
  mp_S01_AXI_wdata_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_wdata_converter");
  mp_S01_AXI_wdata_converter->scalar_in(S01_AXI_wdata);
  mp_S01_AXI_wdata_converter->vector_out(m_S01_AXI_wdata_converter_signal);
  mp_S01_AXI_transactor->WDATA(m_S01_AXI_wdata_converter_signal);
  mp_S01_AXI_wstrb_converter = new xsc::common::scalar2vectorN_converter<4>("S01_AXI_wstrb_converter");
  mp_S01_AXI_wstrb_converter->scalar_in(S01_AXI_wstrb);
  mp_S01_AXI_wstrb_converter->vector_out(m_S01_AXI_wstrb_converter_signal);
  mp_S01_AXI_transactor->WSTRB(m_S01_AXI_wstrb_converter_signal);
  mp_S01_AXI_wlast_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_wlast_converter");
  mp_S01_AXI_wlast_converter->vector_in(S01_AXI_wlast);
  mp_S01_AXI_wlast_converter->scalar_out(m_S01_AXI_wlast_converter_signal);
  mp_S01_AXI_transactor->WLAST(m_S01_AXI_wlast_converter_signal);
  mp_S01_AXI_wuser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_wuser_converter");
  mp_S01_AXI_wuser_converter->scalar_in(S01_AXI_wuser);
  mp_S01_AXI_wuser_converter->vector_out(m_S01_AXI_wuser_converter_signal);
  mp_S01_AXI_transactor->WUSER(m_S01_AXI_wuser_converter_signal);
  mp_S01_AXI_wvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_wvalid_converter");
  mp_S01_AXI_wvalid_converter->vector_in(S01_AXI_wvalid);
  mp_S01_AXI_wvalid_converter->scalar_out(m_S01_AXI_wvalid_converter_signal);
  mp_S01_AXI_transactor->WVALID(m_S01_AXI_wvalid_converter_signal);
  mp_S01_AXI_wready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_wready_converter");
  mp_S01_AXI_wready_converter->scalar_in(m_S01_AXI_wready_converter_signal);
  mp_S01_AXI_wready_converter->vector_out(S01_AXI_wready);
  mp_S01_AXI_transactor->WREADY(m_S01_AXI_wready_converter_signal);
  mp_S01_AXI_bid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_bid_converter");
  mp_S01_AXI_bid_converter->vector_in(m_S01_AXI_bid_converter_signal);
  mp_S01_AXI_bid_converter->scalar_out(S01_AXI_bid);
  mp_S01_AXI_transactor->BID(m_S01_AXI_bid_converter_signal);
  mp_S01_AXI_transactor->BRESP(S01_AXI_bresp);
  mp_S01_AXI_buser_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_buser_converter");
  mp_S01_AXI_buser_converter->vector_in(m_S01_AXI_buser_converter_signal);
  mp_S01_AXI_buser_converter->scalar_out(S01_AXI_buser);
  mp_S01_AXI_transactor->BUSER(m_S01_AXI_buser_converter_signal);
  mp_S01_AXI_bvalid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_bvalid_converter");
  mp_S01_AXI_bvalid_converter->scalar_in(m_S01_AXI_bvalid_converter_signal);
  mp_S01_AXI_bvalid_converter->vector_out(S01_AXI_bvalid);
  mp_S01_AXI_transactor->BVALID(m_S01_AXI_bvalid_converter_signal);
  mp_S01_AXI_bready_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_bready_converter");
  mp_S01_AXI_bready_converter->vector_in(S01_AXI_bready);
  mp_S01_AXI_bready_converter->scalar_out(m_S01_AXI_bready_converter_signal);
  mp_S01_AXI_transactor->BREADY(m_S01_AXI_bready_converter_signal);
  mp_S01_AXI_arid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_arid_converter");
  mp_S01_AXI_arid_converter->scalar_in(S01_AXI_arid);
  mp_S01_AXI_arid_converter->vector_out(m_S01_AXI_arid_converter_signal);
  mp_S01_AXI_transactor->ARID(m_S01_AXI_arid_converter_signal);
  mp_S01_AXI_araddr_converter = new xsc::common::scalar2vectorN_converter<32>("S01_AXI_araddr_converter");
  mp_S01_AXI_araddr_converter->scalar_in(S01_AXI_araddr);
  mp_S01_AXI_araddr_converter->vector_out(m_S01_AXI_araddr_converter_signal);
  mp_S01_AXI_transactor->ARADDR(m_S01_AXI_araddr_converter_signal);
  mp_S01_AXI_arlen_converter = new xsc::common::scalar2vectorN_converter<8>("S01_AXI_arlen_converter");
  mp_S01_AXI_arlen_converter->scalar_in(S01_AXI_arlen);
  mp_S01_AXI_arlen_converter->vector_out(m_S01_AXI_arlen_converter_signal);
  mp_S01_AXI_transactor->ARLEN(m_S01_AXI_arlen_converter_signal);
  mp_S01_AXI_transactor->ARSIZE(S01_AXI_arsize);
  mp_S01_AXI_transactor->ARBURST(S01_AXI_arburst);
  mp_S01_AXI_transactor->ARLOCK(S01_AXI_arlock);
  mp_S01_AXI_transactor->ARCACHE(S01_AXI_arcache);
  mp_S01_AXI_transactor->ARPROT(S01_AXI_arprot);
  mp_S01_AXI_transactor->ARREGION(S01_AXI_arregion);
  mp_S01_AXI_transactor->ARQOS(S01_AXI_arqos);
  mp_S01_AXI_aruser_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_aruser_converter");
  mp_S01_AXI_aruser_converter->scalar_in(S01_AXI_aruser);
  mp_S01_AXI_aruser_converter->vector_out(m_S01_AXI_aruser_converter_signal);
  mp_S01_AXI_transactor->ARUSER(m_S01_AXI_aruser_converter_signal);
  mp_S01_AXI_arvalid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_arvalid_converter");
  mp_S01_AXI_arvalid_converter->vector_in(S01_AXI_arvalid);
  mp_S01_AXI_arvalid_converter->scalar_out(m_S01_AXI_arvalid_converter_signal);
  mp_S01_AXI_transactor->ARVALID(m_S01_AXI_arvalid_converter_signal);
  mp_S01_AXI_arready_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_arready_converter");
  mp_S01_AXI_arready_converter->scalar_in(m_S01_AXI_arready_converter_signal);
  mp_S01_AXI_arready_converter->vector_out(S01_AXI_arready);
  mp_S01_AXI_transactor->ARREADY(m_S01_AXI_arready_converter_signal);
  mp_S01_AXI_rid_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_rid_converter");
  mp_S01_AXI_rid_converter->vector_in(m_S01_AXI_rid_converter_signal);
  mp_S01_AXI_rid_converter->scalar_out(S01_AXI_rid);
  mp_S01_AXI_transactor->RID(m_S01_AXI_rid_converter_signal);
  mp_S01_AXI_rdata_converter = new xsc::common::vectorN2scalar_converter<32>("S01_AXI_rdata_converter");
  mp_S01_AXI_rdata_converter->vector_in(m_S01_AXI_rdata_converter_signal);
  mp_S01_AXI_rdata_converter->scalar_out(S01_AXI_rdata);
  mp_S01_AXI_transactor->RDATA(m_S01_AXI_rdata_converter_signal);
  mp_S01_AXI_transactor->RRESP(S01_AXI_rresp);
  mp_S01_AXI_rlast_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_rlast_converter");
  mp_S01_AXI_rlast_converter->scalar_in(m_S01_AXI_rlast_converter_signal);
  mp_S01_AXI_rlast_converter->vector_out(S01_AXI_rlast);
  mp_S01_AXI_transactor->RLAST(m_S01_AXI_rlast_converter_signal);
  mp_S01_AXI_ruser_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_ruser_converter");
  mp_S01_AXI_ruser_converter->vector_in(m_S01_AXI_ruser_converter_signal);
  mp_S01_AXI_ruser_converter->scalar_out(S01_AXI_ruser);
  mp_S01_AXI_transactor->RUSER(m_S01_AXI_ruser_converter_signal);
  mp_S01_AXI_rvalid_converter = new xsc::common::scalar2vectorN_converter<1>("S01_AXI_rvalid_converter");
  mp_S01_AXI_rvalid_converter->scalar_in(m_S01_AXI_rvalid_converter_signal);
  mp_S01_AXI_rvalid_converter->vector_out(S01_AXI_rvalid);
  mp_S01_AXI_transactor->RVALID(m_S01_AXI_rvalid_converter_signal);
  mp_S01_AXI_rready_converter = new xsc::common::vectorN2scalar_converter<1>("S01_AXI_rready_converter");
  mp_S01_AXI_rready_converter->vector_in(S01_AXI_rready);
  mp_S01_AXI_rready_converter->scalar_out(m_S01_AXI_rready_converter_signal);
  mp_S01_AXI_transactor->RREADY(m_S01_AXI_rready_converter_signal);
  mp_S01_AXI_transactor->CLK(aclk);
  mp_S01_AXI_transactor->RST(aresetn);
  // configure M00_AXI_transactor
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "125000000");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "5");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.000");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,5,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);
  mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
  mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
  mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
  mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
  mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
  mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
  mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
  mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
  mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
  mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
  mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
  mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
  mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
  mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
  mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
  mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
  mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
  mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
  mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
  mp_M00_AXI_transactor->CLK(aclk);
  mp_M00_AXI_transactor->RST(aresetn);

  // initialize transactors stubs
  S00_AXI_transactor_target_wr_socket_stub = nullptr;
  S00_AXI_transactor_target_rd_socket_stub = nullptr;
  S01_AXI_transactor_target_wr_socket_stub = nullptr;
  S01_AXI_transactor_target_rd_socket_stub = nullptr;
  M00_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M00_AXI_transactor_initiator_rd_socket_stub = nullptr;

}

void design_1_smartconnect_0_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "S00_AXI_TLM_MODE") != 1)
  {
    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  
  }
  else
  {
    S00_AXI_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S00_AXI_transactor_target_wr_socket_stub->bind(*(mp_S00_AXI_transactor->wr_socket));
    S00_AXI_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S00_AXI_transactor_target_rd_socket_stub->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_S00_AXI_transactor->disable_transactor();
  }

  // configure 'S01_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "S01_AXI_TLM_MODE") != 1)
  {
    mp_impl->S01_AXI_tlm_aximm_read_socket->bind(*(mp_S01_AXI_transactor->rd_socket));
    mp_impl->S01_AXI_tlm_aximm_write_socket->bind(*(mp_S01_AXI_transactor->wr_socket));
  
  }
  else
  {
    S01_AXI_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S01_AXI_transactor_target_wr_socket_stub->bind(*(mp_S01_AXI_transactor->wr_socket));
    S01_AXI_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S01_AXI_transactor_target_rd_socket_stub->bind(*(mp_S01_AXI_transactor->rd_socket));
    mp_S01_AXI_transactor->disable_transactor();
  }

  // configure 'M00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_0_0", "M00_AXI_TLM_MODE") != 1)
  {
    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  
  }
  else
  {
    M00_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M00_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M00_AXI_transactor->wr_socket));
    M00_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M00_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_M00_AXI_transactor->disable_transactor();
  }

}

#endif // MTI_SYSTEMC




design_1_smartconnect_0_0::~design_1_smartconnect_0_0()
{
  delete mp_S00_AXI_transactor;
  delete mp_S00_AXI_awlen_converter;
  delete mp_S00_AXI_awlock_converter;
  delete mp_S00_AXI_arlen_converter;
  delete mp_S00_AXI_arlock_converter;

  delete mp_S01_AXI_transactor;
  delete mp_S01_AXI_awid_converter;
  delete mp_S01_AXI_awaddr_converter;
  delete mp_S01_AXI_awlen_converter;
  delete mp_S01_AXI_awuser_converter;
  delete mp_S01_AXI_awvalid_converter;
  delete mp_S01_AXI_awready_converter;
  delete mp_S01_AXI_wdata_converter;
  delete mp_S01_AXI_wstrb_converter;
  delete mp_S01_AXI_wlast_converter;
  delete mp_S01_AXI_wuser_converter;
  delete mp_S01_AXI_wvalid_converter;
  delete mp_S01_AXI_wready_converter;
  delete mp_S01_AXI_bid_converter;
  delete mp_S01_AXI_buser_converter;
  delete mp_S01_AXI_bvalid_converter;
  delete mp_S01_AXI_bready_converter;
  delete mp_S01_AXI_arid_converter;
  delete mp_S01_AXI_araddr_converter;
  delete mp_S01_AXI_arlen_converter;
  delete mp_S01_AXI_aruser_converter;
  delete mp_S01_AXI_arvalid_converter;
  delete mp_S01_AXI_arready_converter;
  delete mp_S01_AXI_rid_converter;
  delete mp_S01_AXI_rdata_converter;
  delete mp_S01_AXI_rlast_converter;
  delete mp_S01_AXI_ruser_converter;
  delete mp_S01_AXI_rvalid_converter;
  delete mp_S01_AXI_rready_converter;

  delete mp_M00_AXI_transactor;

}

#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(design_1_smartconnect_0_0);
#endif

#ifdef XM_SYSTEMC
XMSC_MODULE_EXPORT(design_1_smartconnect_0_0);
#endif

#ifdef RIVIERA
SC_MODULE_EXPORT(design_1_smartconnect_0_0);
#endif

