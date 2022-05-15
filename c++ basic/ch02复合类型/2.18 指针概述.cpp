#include <iostream>
using namespace std;

// 获取变量的地址
int main() {

	int num = 10;

	cout << &num << endl;
	cout << sizeof(&num) << endl;
	// 在同一个平台上，所有的地址所占的空间大小是一样的。
	// 32位的系统分配32位编码，4个字节
	// 64位的系统分配64位编码，8个字节


	return 0;
}