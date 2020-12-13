#include "axi_tb.h"

void AxiTB::writeHandler() {
  while (true) {
    wait(clk.posedge_event());
  }
}

void AxiTB::readHandler() {
  wait(clk.posedge_event());
  while (!m_ARVALID.read()) {
    wait(clk.posedge_event());
  }
  m_ARREADY.write(true);
  wait(clk.posedge_event());
  m_ARREADY.write(false);
  int len = m_ARLEN.read() + 1;
  m_RVALID.write(true);
  wait(clk.posedge_event());
  for (int i = 0; i < len; ++i) {
    if (i == len - 1) {
      m_RLAST.write(true);
    }
    while (!m_RREADY.read()) {
      wait(clk.posedge_event());
    }
    wait(clk.posedge_event());
  }
  m_RLAST.write(false);
}
