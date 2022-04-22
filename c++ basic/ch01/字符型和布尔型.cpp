#include <iostream>

using namespace std;

int main() {

	// 演示字符型数据
	// 字符使用单引号引起来，'',单引号中只能是单个字母、单个数字、单个符号,转义字符除外
	char ch = 'a';
	// char ch1 = 'abc'; // 错误的写法
	cout << ch << endl;

	char ch1 = 97;
	cout << ch1 << endl;

	// 转义字符
	cout << "nihao ,\n";

	cout << "C++" << endl;

	cout << "C:\\\\demo\\\\hello" << endl;

	// 布尔类型
	bool flag = true;
	bool flag1 = false;
	bool flag2 = 0; // false
	bool flag3 = 20; // true
    bool flag4 = -20 // false


	cout << flag << endl; // 1
	cout << flag1 << endl; // 0
	cout << flag2 << endl; // 0
	cout << flag3 << endl; // 1

	return 0;
}