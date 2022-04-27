#include <iostream>
using namespace std;
#include "fun.h"
#include "fun1.h"

// 名称空间：可以更好的控制名称的作用域。
// 我们可以自己在程序中创建不同的名称空间。
// 一个名称空间中的名称不会和另外一个名称空间中的同名的名称发生冲突。
// 同时允许程序的其他部分使用这个名称空间中声明的东西。
/*
	1.声明区域：就是可以在区域中进行声明的区域。
	2.潜在作用域：从变量声明点开始，到声明区域的结尾。

	除了用户定义的名称空间外，还存在一个名称空间-全局名称空间。
	它对应于文件级的声明区域

	a.名称空间写在哪儿。定义在全局作用域下。
	b.名称空间中可以写什么。（变量、函数、结构体、类...）
	c.名称空间可以嵌套名称空间
	d.名称空间是开放的。可以随时添加新的内容(如果出现同名的名称空间，做合并的操作)
	e.名称空间可以是匿名的。
	f.名称空间可以有别名
*/
namespace A {
	int num = 0;
	void fun();
	struct Person {};
}

namespace B {
	int num = 10;
	namespace C {
		int num = 20;
	}
}

namespace B {
	int a = 50;
}

namespace {
	int b = 20;	// 隐式的加上static
}

namespace verylongns {
	int c = 30;
}

int main() {
	
	fun::show();
	fun1::show();

	cout << B::num << endl;
	cout << B::C::num << endl;
	cout << B::a << endl;
	cout << b << endl;

	namespace sns = verylongns;
	cout << sns::c << endl;
	cout << verylongns::c << endl;

	return 0;
}