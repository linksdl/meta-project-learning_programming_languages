#include <iostream>

using namespace std;

// 演示三元运算符
int main() {

	/*
		三元运算符的格式：
			关系表达式 ？ 表达式1 : 表达式2
	*/

	//cout << "请输入第一个整数：" << endl;

	//// 获取两个数中的最大值
	//int num1 = 10;
	//int num2 = 20;

	//cin >> num1;

	//cout << "请输入第二个整数：" << endl;

	//cin >> num2;

	//int max = num1 > num2 ? num1 : num2;
	//cout << "最大值为：" << max << endl;

	// 获取三个数中的最大值
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	// 1.获取num1 和num2的最大值
	int tempMax = num1 > num2 ? num1 : num2;

	// 2.拿刚刚获取到的最大值，和num3进行比较
	int max = tempMax > num3 ? tempMax : num3;

	cout << "三个数中最大值是：" << max << endl;

	return 0;
}