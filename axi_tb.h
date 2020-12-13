// -*- C++ -*-
#ifndef _axi_tb_h_
#define _axi_tb_h_

#include <systemc.h>

SC_MODULE(AxiTB) {
 public:
  SC_CTOR(AxiTB) {
    SC_THREAD(writeHandler);
    SC_THREAD(readHandler);
  };

  // m_AW, m_W, m_B
  void writeHandler();

  // m_AR, m_R
  void readHandler();

  sc_in<bool> clk;
  // s_ means Slave side of DUT.
  sc_out<bool> s_ARVALID;
  sc_in<bool> s_ARREADY;
  sc_out<uint32_t> s_ARLEN;
  sc_out<uint32_t> s_ARSIZE;
  sc_out<bool> s_ARID;
  sc_out<uint32_t> s_ARBURST;
  sc_out<bool> s_ARLOCK;
  sc_out<uint32_t> s_ARCACHE;
  sc_out<uint32_t> s_ARPROT;
  sc_out<uint32_t> s_ARQOS;
  sc_out<bool> s_ARUSER;
  sc_in<bool> s_RVALID;
  sc_out<bool> s_RREADY;
  sc_in<bool> s_RLAST;
  sc_in<uint32_t> s_RRESP;
  sc_in<bool> s_RUSER;
  sc_out<bool> s_AWVALID;
  sc_in<bool> s_AWREADY;
  sc_out<uint32_t> s_AWLEN;
  sc_out<uint32_t> s_AWSIZE;
  sc_out<bool> s_AWID;
  sc_out<uint32_t> s_AWBURST;
  sc_out<bool> s_AWLOCK;
  sc_out<uint32_t> s_AWCACHE;
  sc_out<uint32_t> s_AWPROT;
  sc_out<uint32_t> s_AWQOS;
  sc_out<bool> s_AWUSER;
  sc_out<bool> s_WVALID;
  sc_in<bool> s_WREADY;
  sc_out<bool> s_WLAST;
  sc_out<uint32_t> s_WSTRB;
  sc_out<bool> s_WUSER;
  sc_in<bool> s_BVALID;
  sc_out<bool> s_BREADY;
  sc_in<uint32_t> s_BRESP;
  // m_ means Master side of DUT.
  sc_in<bool> m_ARVALID;
  sc_out<bool> m_ARREADY;
  sc_in<uint32_t> m_ARLEN;
  sc_in<uint32_t> m_ARSIZE;
  sc_in<bool> m_ARID;
  sc_in<uint32_t> m_ARBURST;
  sc_in<bool> m_ARLOCK;
  sc_in<uint32_t> m_ARCACHE;
  sc_in<uint32_t> m_ARPROT;
  sc_in<uint32_t> m_ARQOS;
  sc_in<bool> m_ARUSER;
  sc_out<bool> m_RVALID;
  sc_in<bool> m_RREADY;
  sc_out<bool> m_RLAST;
  sc_out<uint32_t> m_RRESP;
  sc_out<bool> m_RUSER;
  sc_in<bool> m_AWVALID;
  sc_out<bool> m_AWREADY;
  sc_in<uint32_t> m_AWLEN;
  sc_in<uint32_t> m_AWSIZE;
  sc_in<bool> m_AWID;
  sc_in<uint32_t> m_AWBURST;
  sc_in<bool> m_AWLOCK;
  sc_in<uint32_t> m_AWCACHE;
  sc_in<uint32_t> m_AWPROT;
  sc_in<uint32_t> m_AWQOS;
  sc_in<bool> m_AWUSER;
  sc_in<bool> m_WVALID;
  sc_out<bool> m_WREADY;
  sc_in<bool> m_WLAST;
  sc_in<uint32_t> m_WSTRB;
  sc_in<bool> m_WUSER;
  sc_out<bool> m_BVALID;
  sc_in<bool> m_BREADY;
  sc_out<uint32_t> m_BRESP;
  sc_out<uint32_t> s_ARADDR;
  sc_in<uint32_t> s_RDATA;
  sc_out<uint32_t> s_AWADDR;
  sc_out<uint32_t> s_WDATA;
  sc_in<uint32_t> m_ARADDR;
  sc_out<uint32_t> m_RDATA;
  sc_in<uint32_t> m_AWADDR;
  sc_in<uint32_t> m_WDATA;
};

#endif  // _axi_tb_h_
