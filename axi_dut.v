module axis_dut(
  input clk,
  input rst,
  input [31:0] s_ARADDR,
  input s_ARVALID,
  output s_ARREADY,
  input [7:0] s_ARLEN,
  input [2:0] s_ARSIZE,
  input [0:0] s_ARID,
  input [1:0] s_ARBURST,
  input s_ARLOCK,
  input [3:0] s_ARCACHE,
  input [2:0] s_ARPROT,
  input [3:0] s_ARQOS,
  input [0:0] s_ARUSER,
  output s_RVALID,
  output [31:0] s_RDATA,
  input s_RREADY,
  output s_RLAST,
  output [1:0] s_RRESP,
  output [0:0] s_RUSER,
  input [31:0] s_AWADDR,
  input s_AWVALID,
  output s_AWREADY,
  input [7:0] s_AWLEN,
  input [2:0] s_AWSIZE,
  input [0:0] s_AWID,
  input [1:0] s_AWBURST,
  input s_AWLOCK,
  input [3:0] s_AWCACHE,
  input [2:0] s_AWPROT,
  input [3:0] s_AWQOS,
  input [0:0] s_AWUSER,
  input s_WVALID,
  output s_WREADY,
  input [31:0] s_WDATA,
  input s_WLAST,
  input [3:0] s_WSTRB,
  input [0:0] s_WUSER,
  output s_BVALID,
  input s_BREADY,
  output [1:0] s_BRESP,
  output [31:0] m_ARADDR,
  output m_ARVALID,
  input m_ARREADY,
  output [7:0] m_ARLEN,
  output [2:0] m_ARSIZE,
  output [0:0] m_ARID,
  output [1:0] m_ARBURST,
  output m_ARLOCK,
  output [3:0] m_ARCACHE,
  output [2:0] m_ARPROT,
  output [3:0] m_ARQOS,
  output [0:0] m_ARUSER,
  input m_RVALID,
  input [31:0] m_RDATA,
  output m_RREADY,
  input m_RLAST,
  input [1:0] m_RRESP,
  input [0:0] m_RUSER,
  output [31:0] m_AWADDR,
  output m_AWVALID,
  input m_AWREADY,
  output [7:0] m_AWLEN,
  output [2:0] m_AWSIZE,
  output [0:0] m_AWID,
  output [1:0] m_AWBURST,
  output m_AWLOCK,
  output [3:0] m_AWCACHE,
  output [2:0] m_AWPROT,
  output [3:0] m_AWQOS,
  output [0:0] m_AWUSER,
  output m_WVALID,
  input m_WREADY,
  output [31:0] m_WDATA,
  output m_WLAST,
  output [3:0] m_WSTRB,
  output [0:0] m_WUSER,
  input m_BVALID,
  output m_BREADY,
  input [1:0] m_BRESP);

endmodule // axis_dut