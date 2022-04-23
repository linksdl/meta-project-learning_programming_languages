#include <iostream>

using namespace std;

// 循环嵌套的案例
int main() {

	// 1.打印九九乘法表
	/*for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " X " << i << " = " << i*j << "\t";
		}
		cout << endl;
	}*/

	// 2. 输出1-100之间的质数
	for (int i = 2; i <= 100; i++) {

		bool flag = true;

		// 判断i是否是质数
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				// 不是质数
				flag = false;
				break;
			}
		}

		// 输出结果
		if (flag) {
			cout << i << endl;
		}

	}


	return 0;
}