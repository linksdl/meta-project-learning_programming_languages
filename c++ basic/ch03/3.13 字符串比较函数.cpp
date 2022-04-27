#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

// 字符串比较函数  strcmp()  strncmp()
int main() {

	// 1. strcmp()
	const char* str1 = "hello";
	const char* str2 = "hello";

	int res = strcmp(str1, str2);
	cout << res << endl; // -1
	if (res == 0) {
		cout << "str1和str2相等" << endl;
	}
	else if (res > 0) {
		cout << "str1大于str2" << endl;
	}
	else {
		cout << "str1小于str2" << endl;
	}

	// 2. strncmp()
	// add 10 10
	// sub 20 10
	res = strncmp("add 10 10", "add", 3);
	cout << res << endl;
	
	// 3. stricmp()	忽略大小写比较
	res = stricmp("hello", "HELLO");
	cout << res << endl;

	// 4. strnicmp()
	res = strnicmp("ADD 10 10", "add", 3);
	cout << res << endl;

	return 0;
}