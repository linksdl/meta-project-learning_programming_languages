#include <iostream>

using namespace std;

/*
	if语句的第二种格式
		if (条件测试) {
			语句体1;
		} else {
			语句体2;
		}
*/
int main() {

	// a.获取两个数据中的最大值。
	//int num1 = 10;
	//int num2 = 20;
	//int max; // 声明一个变量接收最大值。

	//if (num1 > num2) {
	//	// 最大值是num1
	//	max = num1;
	//} else {
	//	// 最大值是num2
	//	max = num2;
	//}

	//cout << "max : " << max << endl;

	// b.判断一个数据是奇数还是偶数，并输出是奇数还是偶数。
	/*int num = 11;
	if (num % 2 == 0) {
		cout << "偶数" << endl;
	}
	else {
		cout << "奇数" << endl;
	}*/

	// c.获取三个数中的最大值
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int max;

	if (num1 > num2) {
		if (num1 > num3) {
			// 最大值是num1
			max = num1;
		}
		else {
			// 最大值是num3
			max = num3;
		}
	}
	else {
		if (num2 > num3) {
			// 最大值是num1
			max = num2;
		}
		else {
			// 最大值是num3
			max = num3;
		}
	}

	cout << "max : " << max << endl;

	return 0;
}