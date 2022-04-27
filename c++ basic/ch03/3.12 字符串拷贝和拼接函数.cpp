#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

// 字符串处理函数 - 字符串拷贝和拼接
int main() {

	// 1. strlen()  获取字符串的长度（字符的个数）
    // size_t 类型 typedef unsigned int
	size_t count = strlen("hello");
	cout << count << endl;

	// 2.char * strcpy(char * dest, const char * src);
	char dest[15] = "";
    //#pragma warning(disable:4996)
	char * res = strcpy(dest, "hello");
	cout << res << endl;
	cout << dest << endl;

	// 3. strncpy
	res = strncpy(dest, "helloworld", 6);
	cout << res << endl;
	cout << dest << endl;

	// 4. char * strcat(char * dest, const char * src); // 字符串连接
	/*res = strcat(dest, "orld");
	cout << res << endl;
	cout << dest << endl;*/

	// 5. strncat
	res = strncat(dest, "orld", 2);  // 部分字符串连接
	cout << res << endl;
	cout << dest << endl;


	return 0;
}