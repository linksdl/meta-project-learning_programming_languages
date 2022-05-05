#include <iostream>

using namespace std;

/*
	初始化条件语句
	do {
		循环体语句;
		控制条件语句;
	} while (判断条件语句);
*/
int main() {

	// 简单的使用
	//int i = 1;
	//do {
	//	cout << "HelloWorld" << endl;
	//	i++;
	//} while (i <= 10);

	// 案例：键盘录入一个整数，统计出这个整数的位数。
	// while循环完成
	/*cout << "请输入一个整数：" << endl;
	int num;
	cin >> num;

	int len = 0;
	if (num == 0) {
		len = 1;
	}
	else {
		while (num != 0) {
			len++;
			num /= 10;
		}
	}
	cout << len << endl;*/


	// do while完成
	cout << "请输入一个整数：" << endl;
	int num;
	cin >> num;

	int len = 0;
	
	do {
		num /= 10;
		len++;
	} while (num != 0);

	cout << len << endl;

	return 0;
}