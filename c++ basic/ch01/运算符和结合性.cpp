#include <iostream>

using namespace std;

int main() {

	// 优先级的案例
	int a = 8;

	a += a -= a *= a /= 2;
	// a = a / 2 = 4
	// a = a * 4 = 16
	// a = a - 16 = 0
	// a = a + 0

	cout << a << endl;	// 0

	// 逗号运算符:多个表达式可以用逗号分开。逗号表达式的值是整个表达式中的最后一个表达式的值。
	int b = 10, c = 20;

	int num = 0;
	num = 1, 2, 3, 4;
	cout << num << endl;

	num = (1, 2, 3, 4);
	cout << num << endl;

	return 0;
}