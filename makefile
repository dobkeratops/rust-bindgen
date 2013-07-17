bindgen: bindgen.rs gen.rs main.rs types.rs clangll.rs clang_sym.rs
	rustc bindgen.rs -L$(LLVM_LIB)

testcpp: bindgen
	./bindgen -emit-clang-ast -x c++ test_bindgen_cpp.h

test:
	g++ test_bindgen_cpp.cpp -c
	ar rcs libtest_bindgen_cpp.a test_bindgen_cpp.o
	rustc testcpp_from_rs.rs

clean:
	rm *.o
	rm *.a
	rm ./bindgen
