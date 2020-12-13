#include "axi_tb.h"

void AxiTB::writeHandler() {
  while (true) {
    wait(clk.posedge_event());
  }
}

void AxiTB::readHandler() {
  while (true) {
    wait(clk.posedge_event());
  }
}
