#include <iostream>
using namespace std;

// new 和 delete 运算符
int main() {

	// 使用 new 分配一个int类型的空间
//    typename * pointer_name = new typename;
	int * p = new int;
	*p = 100;
	cout << *p << endl;

	// 使用完了以后对内存进行释放 === delete new 搭配使用， 否则会发生内存泄漏（memory leak）
    // 不要释放已经释放的内存块
    // 不能使用delete 来释放声明变量所获得的内存
	delete p;	// 释放的是p指向的内存，但是不会删除指针变量p本身，p可以重新指向另一个新分配的内存块。


	return 0;
}