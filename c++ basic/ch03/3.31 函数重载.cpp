#include <iostream>
using namespace std;

void func() {
	cout << "func() 函数调用了" << endl;
}

void func(int a) {
	cout << "func(int) 函数调用了" << endl;
}

void func(double a) {
	cout << "func(double) 函数调用了" << endl;
}

void func(int a, double b) {
	cout << "func(int) 函数调用了" << endl;
}

void func(double a, int b) {
	cout << "func(int) 函数调用了" << endl;
}

class  Person
{
    void fun(int a)
    {
        cout << "func(int) 函数调用了" << endl;
    }

};

// 函数重载
/*
	函数重载的条件：C++下允许函数名相同。
	1.在相同的作用域下
	2.参数的个数，类型，排列顺序不同（特征标不同）

	函数的返回值可以作为函数重载的条件么？
	不可以。

*/
int main() {

	func();
	func(20);
	func(3.14);
    func(3.14, 1);
    func(1, 3.14);

	return 0;
}