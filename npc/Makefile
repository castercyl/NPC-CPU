all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@$(clean)
	verilator -Wall --trace -cc $(wildcard ./mycpu_single_cycle/*.v) --exe ./csrc_csr/main.cpp -LDFLAGS -ldl -LDFLAGS -lSDL2 --top ysyx_22040386_TOP
	make -C obj_dir -f Vysyx_22040386_TOP.mk Vysyx_22040386_TOP
	./obj_dir/Vysyx_22040386_TOP $(IMG)
	#gtkwave ./obj_dir/Vysyx_22040386_TOP.vcd

.PHONY : clean sim
clean:
	rm -rf ./obj_dir
include ../Makefile
