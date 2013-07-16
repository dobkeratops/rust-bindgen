bindgen: bindgen.rs gen.rs main.rs types.rs clangll.rs
	rustc bindgen.rs -L $(LLVM_LIB)

testcpp: bindgen
	./bindgen -x c++ test_bindgen_cpp.h

clean:
	rm ./bindgen
