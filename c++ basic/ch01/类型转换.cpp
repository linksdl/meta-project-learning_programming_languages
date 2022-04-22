#include <iostream> 

using namespace std;

int main() {

	// 自动类型转换
	short s = 12;
	int i = s;
	cout << i << endl;

	// 把大数据类型转换为小数据类型会产生精度损失。
	int num = 20000000;
	s = num;
	cout << s << endl;  // 11520 损失部分数值

	// char,short ... - int
	short s1 = 3;
	cout << sizeof(s1 + 'a') << endl; // 4 转换成int 类型


	short num1 = 20;
	// 强制类型转换
	long l = (long)num1;
	long l1 = long(num1);
	sizeof(long(num1));

	return 0;
}