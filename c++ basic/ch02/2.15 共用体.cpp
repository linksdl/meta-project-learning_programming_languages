#include <iostream>
using namespace std;

// 定义一个共用体
union one4all {
	char ch;
	short s;
	int i;
};

// 演示共用体
int main() {

	// 创建共用体变量
	one4all u1;

	u1.ch = 'a';
	cout << u1.ch << endl;

	u1.i = 10;
	cout << u1.ch << endl;
	cout << u1.i << endl;

	u1.s = 4;

	cout << sizeof(u1) << endl;


	return 0;
}