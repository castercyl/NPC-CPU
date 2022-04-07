all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --cc --exe --trace --build ./csrc/main.cpp ./vsrc/IFU.v ./vsrc/IDU.v ./vsrc/EXU.v ./vsrc/RegisterFile.v ./vsrc/Reg.v ./vsrc/TOP.v --top-module TOP

.PHONY : clean
clean:
	rm -rf ./obj_dir
include ../Makefile
