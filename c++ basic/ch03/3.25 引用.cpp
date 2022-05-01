#include <iostream>
using namespace std;

// 引用 ：就是变量的别名
// typename & 引用的名称 = 变量名;
int main() {

	// 定义一个普通的变量num
	int num = 10;
	// 给num定义一个引用（别名）
	int& rnum = num;	// &不是取地址运算符，而是表示引用

	cout << num << endl;
	cout << rnum << endl;

	cout << "===================" << endl;

	// 通过rnum引用修改值
	rnum = 100;
	cout << num << endl;
	cout << rnum << endl;

	// 一个变量可以有多个引用（别名）
	int& rnum1 = num;
	rnum1 = 200;
	cout << num << endl;
	cout << rnum << endl;
	cout << rnum1 << endl;

	cout << &num << endl;
	cout << &rnum << endl;
	cout << &rnum1 << endl;
	cout << "====================" << endl;

	// 引用的注意事项
	// 1.引用必须引用合法的内存空间
	// int& rnum2 = 10;	// 错误。
	// 2.引用必须初始化
	// int& rnum2;
	// 3.引用一旦初始化，不能改变引用
	int a = 10;
	int b = 20;
	int& ref = a;
	ref = b;
	cout << a << endl;
	cout << b << endl;
	cout << ref << endl;

	// 4.数组的引用
	int arr[3] = { 1,2,3 };
	int(&rarr)[3] = arr;
	rarr[1] = 100;
	cout << arr[1] << endl;

	// 5.引用的本质：通过指针常量取实现的。
	/*
		int a = 10;
		int & aref = a;		int * const aref = &a; 通过指针常量
		aref = 20;			*aref = 20;
	
	*/

	return 0;
}