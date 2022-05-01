#include <iostream>
using namespace std;

// 复习函数的基础知识

/*
	1.函数是什么：一个功能的封装。C++是由函数组成的，函数是程序的模块。
	2.函数有什么好处：
		a.提高代码复用性
		b.提高了维护性
	3.函数分为了 系统函数  和  用户自定义的函数。
	4.函数定义的格式：
		返回值类型  函数名(形式参数列表) {
			函数语句;
			return 返回值;
		}
	5.怎么使用函数：
        b.函数原型（函数声明）
		a.定义函数
		c.调用函数
*/

// 函数原型
int getSum(int, int);
void show();

int main() {

	// 调用函数
	int num1 = 10;
	int num2 = 20;

	int sum = getSum(num1, num2);

	cout << sum << endl;

	show();

	return 0;
}

// 定义函数
// 明确两个内容，一个是返回值类型，一个是参数类表
// 定义一个函数，计算两个数的和
int getSum(int a, int b) {
	int sum = a + b;
	return sum;
}

// 定义一个没有返回值类型，没有参数列表的函数
void show() {
	cout << "没有返回值也没有参数列表函数调用了" << endl;
	return;	// return 可以结束函数。
	cout << "结束了" << endl;
}