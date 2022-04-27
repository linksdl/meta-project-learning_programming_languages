#include <iostream>
#pragma warning(disable:4996)
using namespace std;

// 字符串切割函数
/*
	char * strtok(char * str, const char * delim);
*/
int main() {

	// sub 10 20
	// add 10 20
	char buf[30] = "sub 10 20";
	char* msg[30] = { buf, nullptr };

	// 进行切割
	//// 第一次切割
	//int i = 0;
	//msg[i] = strtok(buf, " ");
	//cout << msg[i] << endl;

	//// 第二次切割
	//i = 1;
	//msg[i] = strtok(nullptr, " ");
	//cout << msg[i] << endl;

	//// 第三次切割
	//i = 2;
	//msg[i] = strtok(nullptr, " ");
	//cout << msg[i] << endl;

	// 使用循环进行优化
	/*int i = 0;
	msg[i] = strtok(buf, " ");

	while (msg[i] != nullptr) {
		i++;
		msg[i] = strtok(nullptr, " ");
	}*/

	int i = 0;

	while ((msg[i] = strtok(msg[i], " ")) && ++i);


	// 遍历数组
	int j = 0;
	while (msg[j] != nullptr) {
		cout << msg[j] << endl;
		j++;
	}

	return 0;
}