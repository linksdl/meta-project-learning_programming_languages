#include <iostream>
using namespace std;

// 存储持续性、作用域、链接性
/*
	存储持续性：
	1.自动存储持续性
	在函数定义中和函数的参数声明的变量，作用域是局部，没有链接性
	2.静态存储持续性
		a.外部链接性：必须在代码块的外边声明，称之为全局变量，外部变量。
		b.内部链接性：必须在代码块的外边声明，使用static修饰。
		c.无链接性：在代码块内声明，使用static修饰。

	3.动态存储持续性
*/
static int global = 2000;

extern const int num;

int main() {

	//int num = 5;
	//{
	//	// int num = 10;
	//	int price = 20;
	//	cout << num << endl;
	//}

	cout << num << endl;

	return 0;
}