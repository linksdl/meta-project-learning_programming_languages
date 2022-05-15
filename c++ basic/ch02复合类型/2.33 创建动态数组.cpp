#include <iostream>
using namespace std;

// 创建动态数组
int main() {

	// typeName * parr = new typeName[元素的个数]

	/*int num = 10;
	int arr[num];*/	// 这种方式创建的数组，要求中括号中是常量值。

	// int num = 10;
	int * p = new int[5];

	// 需要对动态数组进行操作
	*p = 10;  // p[0] = 10;
	p[1] = 20;

	cout << p[0] << endl;
	cout << p[1] << endl;
	cout << p[2] << endl; // 存放不确定的值
	cout << p[3] << endl; // 存放不确定的值
	cout << p[4] << endl; // 存放不确定的值

	// 释放动态数组的内存
	delete[] p;

	return 0;
}