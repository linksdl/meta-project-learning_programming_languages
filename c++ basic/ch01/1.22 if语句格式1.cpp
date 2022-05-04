#include <iostream>

using namespace std;

// if语句的第一种格式
/*
	if (测试条件) {
		语句体；
	}
*/
int main() {

	// 键盘录入两个整数，判断两个整数是否相等，并输出是否相等。

	// 1.键盘录入两个整数
	cout << "请输入第一个整数：" << endl;
	int num1;
	cin >> num1;

	cout << "请输入第二个整数：" << endl;
	int num2;
	cin >> num2;

	// 2.判断两个整数是否相等
	if (num1 == num2) {
		cout << "两个数相等" << endl;
		cout << "hello" << endl;
	}
	// cout << "两个数不相等" << endl;
	// 3.输出结果

	/* 
		if语句的注意事项：
			1.无论测试条件多么复杂，结果都是bool类型的值
			2.大括号可以省略，但是只对if下面的第一条语句起作用。
	*/

	return 0;
}