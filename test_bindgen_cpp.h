//
// test header for cpp support in bindgen
//

extern "C" int foo(int, int, int);
extern "C" float* foo2(int, const char* txt[7], int*);
extern "C" void foo3(int);

typedef int u32;
template<typename X,typename Y> 
struct TestTmp {
	X x; Y y;
};
struct Ab {
	int a,b;
};

struct Abc {
	int a,b,c;
};

struct Foo {
	float x,y,z;
	const char* name;
	void bar(int x,float y);
	const char* getBaz(const void* src);
	TestTmp<u32,Abc>	data;
	struct Nested_s {
		int nx,ny;
		int getOrange(int) const;
	} m_nested;
};

enum ETest {
	E_1,E_2,E_3
};
