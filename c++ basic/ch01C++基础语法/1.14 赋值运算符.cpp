#include <iostream> 

using namespace std;

// 演示的赋值运算符
// = 、 += 、 -= 、 /=、 *= 、 %=
int main() {

	int i = 10;
	int y = 20;

	i = y;

	// 案例：交换两个变量的值
	int a = 10;
	int b = 20;
	int temp = a;
	a = b;
	b = temp;

	cout << "a: " << a << " b: " << b << endl;

	// 注意事项：=左边必须是变量
	// 10 = a;  // 错误的

	// 组合运算符 +=
	int num1 = 12;
	int num2 = 8;

	// num1 += num2;  // num1 = num1 + num2;
	// cout << "num1：" << num1 << endl;

	// 注意事项：组合运算符必须把右边看成一个整体
	// num1 += num2 * 10;	// num1 = num1 + (num2 * 10)
	// cout << "num1：" << num1 << endl;

	num1 *= num2 + 1;	// num1 = num1 * (num2 + 1)
	cout << "num1：" << num1 << endl;	// 108

	return 0;
}