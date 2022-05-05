#include <iostream>

using namespace std;

/*
	continue:忽略本次循环，继续下次循环，不会结束掉循环。
	break和continue使用场景：
		break:只能使用在switch和循环里。
		continue：只能在循环中使用。
*/
int main() {


	//for (int i = 0; i < 6; i++) {
	//	if (i == 4) {
	//		continue;
	//	}
	//	cout << i << "\t";
	//}

	// 案例：输入一个正整数n(n > 1),计算1~n之间所有奇数的和
	int n;
	cout << "输入一个正整数n(n > 1): " << endl;
	cin >> n;

	int sum = 0; // 累加变量

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			// 偶数
			continue;
		}
		sum += i;
	}

	cout << "sum: " << sum << endl;




	return 0;
}