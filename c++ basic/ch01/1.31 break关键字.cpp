#include <iostream>

using namespace std;

/*
	break:表示退出循环，继续循环下面的代码
*/
int main() {

	/*for (int i = 1; i <= 5; i++) {
		if (i == 3) {
			break;
		}
		cout << i << "\t";
	}
	cout << "over" << endl;*/

	// 案例：输入一个大于1的正整数，判断它是不是质数。
	int num;
	cout << "输入一个大于1的正整数: " << endl;
	cin >> num;

	// 定义一个布尔类型的变量记录结果
	bool flag = true;

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			flag = false;
			// 能够被整除，有因子，就不是质数。
			break;
		}
	}

	if (flag) {
		cout << num << "这个数是质数" << endl;
	}
	else {
		cout << num << "这个数不是质数" << endl;
	}

	return 0;
}