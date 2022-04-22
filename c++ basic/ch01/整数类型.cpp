#include <iostream> 
#include <climits>

using namespace std;

int main() {

	// 字面量、常量、常数
	cout << 20 << endl;
	cout << 3.14 << endl;
	cout << true << endl;

	// 对于整数有三种表现形式（十进制、十六进制、八进制）
	cout << 20 << endl;
	cout << 0x20 << endl;
	cout << 020 << endl;

	// 声明一个int类型的变量并初始化
	int num = 30;
	int num1(40);

	cout << num1 << endl;

	// int int_max = INT_MAX + 1;
	// cout << int_max << endl;

	cout << 30L << endl;
	cout << 30ll << endl;
	cout << 30ul << endl;
	// unsigned 默认就是unsigned int的缩写

	return 0;
}