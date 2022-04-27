#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

// 字符串查找函数
/*
	char * strstr(const char * str, const char * substr);
	作用：在str中查找substr第一次出现的位置（地址）
*/
int main() {

	// 创建一个字符串
	/*char buf[20] = "helloworld";

	char* s = nullptr;

	s = strstr(buf, "wo");

	if (s == nullptr) {
		cout << "没有查找到" << endl;
	}
	else {
		cout << s << endl;
	}*/

	// 需求：给出一个字符串，将字符串中的脏词查找到，并且使用*替换
	// 创建一个字符串
	char buf[30] = "shadan sb, hello, sb";	// "shadan **, hello, **"

	char* ret = nullptr;

	while (ret = strstr(buf, "sb")) {
		strncpy(ret, "**", 2);
	}

	//while (true) {

	//	char* ret = strstr(buf, "sb");

	//	if (ret == nullptr) {
	//		cout << "没有查找到" << endl;
	//		break;
	//	}
	//	else {
	//		strncpy(ret, "**", 2);
	//	}

	//}

	cout << buf << endl;


	return 0;
}