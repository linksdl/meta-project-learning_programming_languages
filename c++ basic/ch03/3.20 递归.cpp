#include <iostream>
using namespace std;

// 递归
/*
	函数定义当中调用函数本身的现象，称之为递归。
	递归解决问题的思路：拆分和合并。

	使用递归的注意事项：
		1.递归一定要有出口。不然会产生死递归。Stack Overflow 栈内存溢出的错误。
		2.递归的次数不能过多。

*/

long jiecheng(int n) {
	// 定义一个累积变量
	int ji = 1;
	for (int i = 1; i <= 5; i++) {
		ji = ji * i;
	}
	return ji;
}

// 使用递归的方式解决求n的阶乘。
long long jiecheng1(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n* jiecheng1(n - 1);
	}
}

void show() {
	show();
}

int main() {

	// 计算5!
	cout << jiecheng1(20) << endl;

	// show();

	return 0;
}






