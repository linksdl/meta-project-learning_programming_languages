#include <iostream>

using namespace std;

// 演示switch语句的使用
/*
	switch (表达式) {
	
		case 值1:
			语句体1;
			break;
		case 值2:
			语句体2;
			break;
		case 值3:
			语句体3;
			break;
		...
		default:
			语句体n;
			break;
	
	}
	
*/
int main() {

	// 案例：键盘录入月份，输出对应的季节。
	// 3,4,5 春天 6,7,8 夏天 9,10,11 秋天  12,1,2 冬天
	
	cout << "请输入一个月份： " << endl;
	// 声明一个月份
	int month;

	cin >> month;

	switch (month) {

		case 3:
		case 4:
		case 5:
			cout << "春天" << endl;
			break;

		case 6:
		case 7:
		case 8:
			cout << "夏天" << endl;
			break;

		case 9:
		case 10:
		case 11:
			cout << "秋天" << endl;
			break;

		case 12:
		case 1:
		case 2:
			cout << "冬天" << endl;
			break;

		default :
			cout << "您输入的月份有误" << endl;
			break;
	}

	/*
		1. case后面必须是一个常量，不能是变量，值不能重复
		2. switch中的表达式必须是一个整数或者枚举类型
		3. default 可以省略。不建议，位置不一定要放在最后。
		4. break可以省略

		switch语句和if语句的区别：
			switch只能对几个常量值进行判断
			if可以对一个范围的判断，结果是针对布尔类型的值判断，对几个常量值的判断。
	*/

	return 0;
}