all	:
	verilator --sc axi_main.cpp axi_tb.cpp axi_dut.v --exe
	make -C obj_dir/ -f Vaxi_dut.mk
