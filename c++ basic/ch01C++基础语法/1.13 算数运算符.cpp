#include <iostream>

using namespace std;

// 演示算数运算符的使用
int main() {

	// 除法运算, 整数想除得到的还是整数
	int num1 = 5;
	int num2 = 2;

	int result = num1 / num2;
	cout << result << endl;
	cout << num1 / num2 << endl;

	// %模  取余操作
	cout << 5 % 2 << endl;
	cout << 5 % -2 << endl;
	cout << -5 % 2 << endl;
	cout << -5 % -2 << endl;

	// ++ --
	// ++作用是对变量进行自增1 
	int i = 1;
	int j = 1;
	// i++;
	// ++i;
	int sum = i++ + 2;
	int sum1 = ++j + 2;
	// ++在操作数的前面，先自增，然后参与运算
	// ++在操作数的后面，先参与运算，然后自增

	cout << sum << endl;
	cout << sum1 << endl;
	cout << i << endl;
	cout << j << endl;




	return 0;
}