#include <iostream>
#include <string>

using namespace std;

// string类
int main() {

	// 创建和初始化
	string str1 = { 'H','e','l','l','o' };
	cout << str1 << endl;

	string str2 = "nihao";
	cout << str2 << endl;

	string str3 = { "Kitty" };
	cout << str3 << endl;

	string str4 { "Kitty1" };
	cout << str4 << endl;

	// 其他的操作
	string str5 = str4;
	cout << str5 << endl;

	string str6 = str1 + str3;
	cout << str6 << endl;

	str1 += str2;
	cout << str1 << endl;

	// 获取长度
	int len = str3.size();
	cout << len << endl;

	// cin键盘输入数据到string中
	string str7;

	// cin >> str7;
	getline(cin, str7);	// 按照回车换行为字符串结束

	cout << str7 << endl;

	return 0;
}