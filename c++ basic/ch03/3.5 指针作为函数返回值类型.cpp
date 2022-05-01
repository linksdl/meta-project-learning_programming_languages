#include <iostream>
using namespace std;

// 指针作为函数返回值类型
// 注意事项：不要返回局部变量的地址。因为局部变量当函数调用完毕以后会自动释放内存。

// 定义一个全局变量
int num = 0;
// 需求：定义一个函数，返回num的地址。
int * getIntAddr() {
	return &num;  // 返回地址
}

int* getIntAddr1() {
	int a = 10;
	return &a; // 不能返回局部变量地址
}

// 需求： 定义一个函数，根据指定的字符和个数构建字符串。
char* buildstr(char c, int n) {

	// 动态创建一个字符串
	char* pstr = new char[n + 1];
	pstr[n] = '\0';
	while (n-- > 0) {
		pstr[n] = c;
	}
	return pstr;
}

int main() {

	/*int* p = nullptr;
	p = getIntAddr();
	*p = 1000;
	cout << num << endl;*/

	/*int* p = getIntAddr1();
	*p = 1000;
	cout << *p << endl;*/

	// 测试函数
	int times;
	char ch;

	cout << "请输入一个字符：" << endl;
	cin >> ch;

	cout << "请输入一个整数：" << endl;
	cin >> times;

	char * ps = buildstr(ch, times);
	cout << ps << endl;

	// 释放内存
	delete[] ps;

	ps = buildstr('+', 16);
	cout << ps << endl;
	delete[] ps;

	return 0;
}