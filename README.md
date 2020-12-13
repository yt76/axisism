Axisism AXI verification platform-ish.

This might be an example to setup AXI verification environment with SystemC and Verilog.

* `axi_main.cpp` - Testbench top module in SystemC.
* `axi_tb.cpp`, `axi_tb.h` - AXI handler in SystemC.
* `axi_dut.v` - DUT in Verilog.




Install Verilator. Then,

    $ make
    $ ./obj_dir/Vaxi_dut
