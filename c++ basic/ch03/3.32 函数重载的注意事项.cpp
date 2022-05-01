#include <iostream>
using namespace std;

// 函数重载的注意事项
/*
	函数重载：C++允许在程序中出现同名的函数，只要它们的参数列表（特征标）不同。
	（参数的个数、参数的类型、参数的排列顺序）
	把功能相同或者相似的一系列的函数，让他们函数名相同，形成重载的关系。
*/
//void show(int num) {
//	cout << "void show(int num)" << endl;
//}
//
//void show(const int num) {
//	cout << "void show(const int num)" << endl;
//}

void func(int& a) {	// int & a = 10;
	cout << "void func(int& a)" << endl;
}

//void func(int a) {
//	cout << "void func(int a)" << endl;
//}

void func(const int& a) {	// const int & a = 10;
	cout << "void func(const int& a)" << endl;
}

void MyFunc(int a, int b = 100) {

}

void MyFunc(int a) {

}

int main() {

	// 1.const普通变量
	// 对于值传递，因为形参是复制传递进函数的，函数内部无法改变实参。那么加不加const对于实参没有任何的区别。
	// 函数的调用选择是根据实参进行的。
	/*int a = 10;
	show(a);
	const int b = 20;
	show(b);*/

	// 2.参数是引用
	/*int num = 10;
	int& rnum = num;
	func(rnum);*/

	// 3.默认参数和函数重载一起使用。要注意二义性的问题。
	// MyFunc(10);

	return 0;
}