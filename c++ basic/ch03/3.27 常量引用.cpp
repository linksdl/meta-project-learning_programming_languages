#include <iostream>
using namespace std;

// 常量引用
/*
	左值：是可以被引用的数据对象。= 左边 例如：变量、数组元素arr[0]、结构体变量的成员、引用、解除引用的指针
	右值（非左值）：字面常量(10, 20)、包含多项的表达式。
	普通变量属于可修改的左值，const变量属于不可修改的左值。
*/

// 定义函数，计算一个数的立方
int vcube(int num) {
	return num *= num * num;
}

int rcube1(int& rnum) {
	return rnum * rnum * rnum;
}

int rcube(const int& rnum) {	// int temp = a; const int& rnum = temp; 常量引用 不能修改
	// return rnum *= rnum * rnum;
	return rnum * rnum * rnum;
}

int main() {

	// 定义一个引用变量
	// int& b = 10;	// 非常量引用的初始值必须为左值。

	// 常量引用
	// const int& b = 10;	// int temp = 10; const int& b = temp;
	
	/*int num = 2;
	cout << num << "的立方是：" << vcube(num) << endl;

	int rnum = 2;
	cout << rnum << "的立方是：" << rcube(rnum) << endl;*/

	/*const int b = 10;
	vcube(b);
	rcube1(b);*/

	const double a = 10;
	// rcube1(a);
	rcube(a);

	return 0;
}
/*
	使用常量引用作为函数参数的好处：
	1.避免无意中修改数据。
	2.能够处理const和非const的实参，否则只能接受非const的数据。
	3.使函数正确生成并使用临时变量。
*/