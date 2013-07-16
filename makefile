bindgen: bindgen.rs gen.rs main.rs types.rs clangll.rs
	rustc main.rs -L$LLVM_LIB

testcpp: bindgen
	./bindgen -x c++ testbindgen.h
