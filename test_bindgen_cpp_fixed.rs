use cppemu::*;

/* automatically generated by rust-bindgen */

use std::libc::*;
pub type _u32 = c_int;
pub struct Struct_Xy {
    pub x: c_int,
    pub y: c_int,
}
pub type Xy = Struct_Xy;
pub struct Struct_Abc {
    pub a: c_int,
    pub b: c_int,
    pub c: c_int,
}
pub type Abc = Struct_Abc;
pub struct Struct_Foo {
    pub x: c_float,
    pub y: c_float,
    pub z: c_float,
    pub name: *c_schar,
    pub data1: Struct_DynamicArray<Abc>,
    pub data2: Struct_DynamicArray<Xy>,
}
pub type Foo = Struct_Foo;
pub type Enum_ETest = c_uint;
pub static E_1: c_uint = 0;
pub static E_2: c_uint = 1;
pub static E_3: c_uint = 2;
pub extern "C" {
    fn foo(arg1: c_int, arg2: c_int, arg3: c_int) -> c_int;
    fn foo2(arg1: c_int, txt: *mut *c_schar, arg2: *mut c_int) ->
     *mut c_float;
    fn foo3(arg1: c_int);
    fn Foo_bar(this_ptr:&Foo, x: c_int, y: c_float);
    fn Foo_getBaz(this_ptr:&Foo,src: *c_void) -> *c_schar;
    fn Foo_getOrange(this_ptr:&Foo,arg1: c_int) -> c_int;
}
impl Struct_Foo {
    pub unsafe fn bar(&mut self, x: c_int, y: c_float) {
        Foo_bar(self, x, y)
    }
    pub unsafe fn getBaz(&mut self, src: *c_void) -> *c_schar {
        Foo_getBaz(self, src)
    }
    pub unsafe fn getOrange(&mut self, arg1: c_int) -> c_int {
        Foo_getOrange(self, arg1)
    }
}
