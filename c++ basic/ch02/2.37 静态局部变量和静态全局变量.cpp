#include <iostream>
using namespace std;

void fun() {
	static int num = 10; // 第一次初始化有效 静态局部变量如果被初始化语句执行多次，只有第一次有效。
	num++;
	cout << num << endl;
}

// 定义一个静态全局变量
static int num2;
extern int date;

// 静态局部变量和静态全局变量
int main() {

	// 静态局部变量,只需要在普通局部变量前加上static进行修饰
	/*
		1.代码中的位置：在代码块{}内部定义
		2.存储空间：全局区
		3.作用范围：离他最近的{}之间
		4.生命周期：整个程序进程。
		5.注意事项：
			a.静态局部变量，不初始化，内容为0。
			b.不同的作用域中的静态局部变量同名，采用就近原则。
			c.静态局部变量如果被初始化语句执行多次，只有第一次有效。

	*/
	//static int num = 20;
	//{
	//	static int num = 10;
	//	// cout << num << endl;
	//}
	//// cout << num << endl;	// error,因为是局部变量，所以只能在作用域中进行访问。
	//cout << num << endl;

	/*fun();
	fun();
	fun();
	fun();*/

	// 静态全局变量
	/*
		1.代码中的位置：在文件中，函数外定义。并且使用static关键字进行修饰。
		2.存储空间：全局区
		3.作用范围：只能在当前源文件中有效
		4.生命周期：整个进程。
		5.注意事项：
			a.静态全局变量，不初始化，内容为0。
	*/
	cout << num2 << endl;
	// cout << date << endl; // 静态全局变量的作用范围在当前的源文件中有效。

	return 0;
}