//
// test header for cpp support in bindgen
//

extern "C" int foo(int, int, int);
extern "C" float* foo2(int, const char* txt[7], int*);
extern "C" void foo3(int);

typedef int u32;

/*
Template declarations are not passed through to rust
Intention is to mirror these manually in rust code.
instantiations in data structures are passed through.
intended use is collection classes. (c++ vector, smart pointer types)
perhaps these could be ifdefd' to a simpler form for parsing by rustbindgen rather than
including the whole of stdlib
*/

template<typename X> 
struct DynamicArray {
	X* first,*last,*capacity;
};

typedef struct Xy {
	int x,y;
} Xy;

typedef struct Abc {
	int a,b,c;
} Abc;

typedef struct Foo {
	float x,y,z;
	const char* name;
	void bar(int x,float y);
	const char* getBaz(const void* src);
	DynamicArray<Abc>	data1;
	DynamicArray<Xy>	data2;
	int getOrange(int) const;
// nested structs are currently broken :(
// they seem to add themselves to the parent context
/*
	struct Nested_s {
		int nx,ny;
	} m_nested;
*/
} Foo;

enum ETest {
	E_1,E_2,E_3
};

