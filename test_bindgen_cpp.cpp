#include <stdio.h>
#include <malloc.h>

#include "test_bindgen_cpp.h"


/*
#define OFS(base,member) ((size_t)(&(base->member))-(size_t)(base))
extern "C" void Foo_bar(struct Foo* self, int x, float y) {
	printf("C++ says sizeof *self=%d\n",sizeof(*self));
	printf("C++ says offsetof x,y,z=%d,%d,%d\n",OFS(self,x),OFS(self,y),OFS(self,z));
	printf("%x\n",self);
	printf("hello from c++\n%s\n",__FUNCTION__);
	self->bar(x,y);
}
extern "C" const char* Foo_getBaz(struct Foo* self, const void* src) {
	return self->getBaz(src);
}

void Foo::bar(int ax, float ay) {
	printf("%s ax=%d ay=%.3f\n",__FUNCTION__,ax,ay);
	printf("thisptr = %x\n",this);
	printf("Before store: %s this->x=%d this->y%.3f\n",__FUNCTION__,this->x,this->y);
	this->x = ax;
	this->y = ay;
	printf("after store:%s this->x=%d this->y%.3f\n",__FUNCTION__,this->x,this->y);
}
const char* Foo::getBaz(const void* src) {
	printf("%s %d %.3f\n",__FUNCTION__,this->x,this->y);
}

extern "C" const char* Nested_s_getOrange(struct Nested_s*, int x, float y) {
	printf("hello from c++ %s\n",__FUNCTION__);
	return	NULL;
}

extern "C" int foo(int, int, int) {
	printf("hello from c++ %s\n",__FUNCTION__);
	return	0;
}

extern "C" float* foo2(int, const char* txt[7], int*) {
	return	NULL;
}

extern "C" void foo3(int) {

}
*/
