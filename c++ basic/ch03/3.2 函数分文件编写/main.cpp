#include <iostream>
#include "fun.h"

using namespace std;

// #include 后面使用<> 和 ""的区别
/*
	1.包含的是自定义的头文件，用""， 编译器首先在当前的工作目录或者源代码目录查找；
	如果没有，在系统的标准位置去查找。
	2.包含的是系统提供的头文件，用<>，编译器直接到标准位置当中去查找。
*/


// 多文件编程（函数的分文件编写）
int main() {

	int sum = getSum(10, 20);
	cout << sum << endl;

	return 0;
}