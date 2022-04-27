#include <iostream>
#include <cstring>
using namespace std;

// 字符查找函数 
/*
	char * strchr(const char * s , int c) : 在字符串s中查找字符c第一次出现的地址。 
*/
int main() {

	// 创建一个字符串
	char buf[20] = "helloworld";

	// 定义一个char *类型的变量，用于接收查找到的地址
	char* p = nullptr;
	char* temp = buf;

	/*while (true) {
		p = strchr(temp, 'l');
		if (p == nullptr) {
			cout << "没有查找到" << endl;
			break;
		}
		else {
			cout << "所在位置：" << p - buf << endl;
			temp = p + 1;
		}
	}*/

	while (p = strchr(temp, 'l')) {
		cout << "所在位置：" << p - buf << endl;
		temp = p + 1;
	}
	

	



	return 0;
}