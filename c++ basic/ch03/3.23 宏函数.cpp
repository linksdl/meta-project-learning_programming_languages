#include <iostream>
using namespace std;

// 定义一个宏常量
#define MAX 1024	// 宏常量	MAX称为符号常量

// 定义一个宏函数
#define GETSUM(x, y) ((x)+(y))	// 宏函数

int getSum(int x, int y) {
	return x + y;
}

// 宏函数：宏函数就是使用宏定义定义出来的函数，并不是真正意义上的函数。
int main() {

	// 使用宏常量
	// cout << MAX << endl;		// cout << 1024 << endl;
	// cout << MAX + 1 << endl;	// cout << 1024 + 1 << endl;

	// 使用宏函数
	int a = 10;
	int b = 20;
	cout << GETSUM(a, b) * 5 << endl;	// cout << ((a)+(b)) * 5 << endl;

	// 使用宏函数的注意事项：要保证运算的完整性

	// 宏函数的使用场景：频繁调用和短小的函数，封装成宏函数。
	// 使用宏函数的优点：以空间换时间。

	return 0;
}