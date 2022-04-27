#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

// 字符串转换函数
int main() {

	// 大小写转换
	char buf[20] = "HelloWorld";
	strupr(buf);
	cout << buf << endl;

	strlwr(buf);
	cout << buf << endl;

	// 字符串转换成数字，add 10 10
	// int atoi(const char * nptr);
	int num = atoi(" o3456^!");
	cout << num << endl;

	// double strtod(const char* str, char** endptr);
	/*double d = strtod(" !3.14 ", nullptr);
	cout << d << endl;*/

	char* ch = nullptr;

	double d = strtod(" 3.14ea ", &ch);
	cout << d << endl;
	cout << ch << endl;



	return 0;
}