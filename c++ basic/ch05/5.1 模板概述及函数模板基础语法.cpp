#include <iostream>
using namespace std;

// 实现两个整型数字的交换
void mySwapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
// 实现两个浮点类型数字的交换
void mySwapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

// 使用函数模板实现通用的交换
// 函数模板可以将类型参数化
template<typename T> // T属于通用的数据类型，告诉编译器下面出现这个T类型，不要报错
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void fun() {

}


int main() {

	int a = 10;
	int b = 20;
	mySwap(a, b);	// 自动类型推导
	cout << "a : " << a << " , b : " << b << endl;

	char c = 'c';
	// mySwap(a, c); 必须推导出一致的T类型，才可以使用模板

	// 显示指定类型
	mySwap<int>(a, b);

	double d1 = 1.1;
	double d2 = 2.2;
	mySwap(d1, d2);
	cout << "d1 : " << d1 << " , d2 : " << d2 << endl;

	// fun();	// 模板必须要确定出T的类型，才可以使用
	fun<int>();


	return 0;
}