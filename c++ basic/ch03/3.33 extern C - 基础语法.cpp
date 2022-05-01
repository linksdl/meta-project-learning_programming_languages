#include <iostream>
using namespace std;

/*
	函数重载的原理：由于编译器采用了一种技术，name decoration(名称修饰),
	name mangling(名称矫正)。
*/
// func_v
void func() {
}
// func_i
void func(int a) {
}
// func_d
void func(double d) {
}
// func_i_d
void func(int a, double b) {
}
// func_d_i
void func(double a, int b) {
}

//extern "C" void fun() {}
//extern "C" void fun(int v) {}

//extern "C" {
//	void fun() {}
//	void fun(int v) {}
//}

extern "C" void fun();
extern "C" void fun(int v);

// extern "C" : 被extern "C"所修饰的代码会按照C语言的方式去编译。 
int main() {



	return 0;
}

extern "C" void fun() {

}
extern "C" void fun(int v) {

}