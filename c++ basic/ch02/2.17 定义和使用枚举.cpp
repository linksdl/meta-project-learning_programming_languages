#include <iostream>
using namespace std;

// 定义一个枚举类型（颜色的符号常量）
enum Colors { red, green, blue = 4, yellow, purple };

enum  { red1, green1, blue1 };

int main() {

	// const 关键字，限定符 ，作用是创建符号常量
	const int Months = 12;	// 表示一年中的月份数。
	cout << Months << endl;

	// 修改Months的值
	// Months = 20;		// 错误的，const修饰的内容是不能被修改的。

	// 枚举：是一种数据类型，用于创建一系列相关的符号常量。
	// 定义枚举类型的变量
	Colors color = red;
	cout << color << endl;
	cout << red << endl;

	// color = 5;
	color = Colors(5);
	cout << color << endl;

	// 枚举量的值可以自动提升为int类型参与运算
	int num = blue;
	num = green + 1;

	color = Colors(200);	// 没有意义，因为值不在枚举的范围内。
	cout << color << endl;


	int col = green1;
	switch (col) {
		case green1: 
			cout << "green1" << endl;
			break;
		case red1:
			cout << "red1" << endl;
			break;
		case blue1:
			cout << "blue1" << endl;
			break;
		default:
			break;
	}


	return 0;
}