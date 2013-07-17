use std::libc::*;
use test_bindgen_cpp::*;
use std::sys::*;	// for size_of
mod test_bindgen_cpp;
mod cppemu;

#[link_args = "-L."]
//#[link_args = "-lglut"]
#[link_args = "-ltest_bindgen_cpp"]

extern "C" {
//	fn foo(a:c_int,b:c_int,c:c_int)->c_int;
//	fn glutInit();
}

//unsafe fn lea<T>(a:*T)->uint {	a as uint }
//unsafe fn ofs<A,B>(a:*A,b:*B)->int {	a as int  - b as int  }


fn main() {
/*
	let mut a=Struct_Foo{
		x: 1.0,
		y: 2.0,
		z: 3.0,
		name: 0 as *c_schar,
		m_nested:Struct_Nested_s{
			nx:0,ny:0
		}
	};
	println(fmt!("size of Struct_Foo = %u\n", size_of::<Struct_Foo>()));
	unsafe {
		let px:*c_float=&a.x;
		let pa:*Struct_Foo=&a;
		println(fmt!("Rust says offset of x,y,z = %i,%i,%i a addr=%x, x,y,z addrs= %x,%x,%x\n", 
				 ofs(&a.x,&a), ofs(&a.y,&a),ofs(&a.z,&a), lea(&a),lea(&a.x),lea(&a.y),lea(&a.z)
			));
		a.bar(3,4.0);
		foo(1,2,3);
	}
*/
	println("hello from rust");
	
}

