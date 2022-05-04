#include <iostream>

using namespace std;

// 演示键盘输入 ，使用cin完成
// cin >> value_holder
int main() {

	cout << "请输入一个整数：" << endl;

	int num;

	// 这条语句是阻塞的，程序运行到这一行，会停在这儿，等待用户输入。
	cin >> num;

	// 使用获取到的数据
	cout << "您输入的整数是：" << num << endl;

	cout << "请输入一个小数：" << endl;

	double d;

	cin >> d;
//    cin >> d;

	cout << "您输入的小数是：" << d << endl;

	// 案例：加法计算器，提示用户输入两个整数，然后将两个数的和打印出来。

	return 0;
}