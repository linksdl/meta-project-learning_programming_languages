#include <iostream>
using namespace std;

// 定义宏函数
#define GETSUM(a, b) ((a) + (b)) 
#define COMPARE(a, b) ((a) < (b)) ? (a) : (b)

// 宏函数的缺陷1：需要加上括号保证运算的完整

// 定义一个普通的函数
int compare(int a, int b) {
	return  a < b ? a : b;
}

// 内联函数必须在函数声明和函数定义上都要加上inline关键字。
inline int fun();
inline int fun() {
	cout << "fun..." << endl;
}
/*
*	某些情况编译器不会做内联编译：
*	1.不能存在任何形式的循环语句
*	2.不能存在过多的条件判断语句
*	3.函数体不能过于庞大
*	4.不能对函数进行取地址的操作
*/

// 内联函数:内联函数本质也是一个普通的函数，解决了宏函数的缺陷。
int main() {
	
	/*int x = 3;
	int y = 5;
	int res = GETSUM(x, y) * 3;
	cout << res << endl;*/

	int a = 10;
	int b = 20;
	//int res = COMPARE(++a, b);	// 相当于： ((++a) < (b)) ? (++a) : (b)
	//cout << res << endl;

	int res = compare(++a, b);
	cout << res << endl;

	return 0;
}