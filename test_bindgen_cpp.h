//
// test header for cpp support in bindgen
//

int foo(int, int, int);
float* foo2(int, const char* txt[7], int*);
void foo3(int);

struct Foo {
	float x,y,z;
	const char* name;
	void bar(int x,float y);
	const char* getBaz(const void* src);
	struct Nested_s {
		int nx,ny;
		int getOrange(int) const;
	} m_nested;
};

enum ETest {
	E_1,E_2,E_3
};
