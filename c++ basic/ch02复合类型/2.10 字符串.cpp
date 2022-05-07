#pragma warning(disable:4996)
#include <iostream>
#include <cstring>

using namespace std;

// C-风格的字符串
int main() {

	// 创建字符串
	// char name[5] = {'h','e','l','l','o'};
	char name1[6] = { 'h','e','l','l','o','\0'};

	// cout << name << endl;
	cout << name1 << endl;

	// 1.键盘录入数据到字符串中
	//char name2[20];
	//// cin >> name2;
	//cin.getline(name2, 20);
	//cout << name2 << endl;
	
	// 2.cstring 包含了对字符串相关的操作
	// 获取字符串的长度 strlen()
	// 将字符串复制到字符数组中 strcpy()
	// 将字符串加到字符数组的末尾  strcat()
	/*char name3[] = "hello";
	int len = strlen(name3);
	cout << len << endl;
	cout << sizeof(name3) << endl;*/

	char chs[20];
	strcpy(chs, "hello");

	cout << chs << endl;

	strcat(chs, "nihao");
	cout << chs << endl;

	return 0;
}