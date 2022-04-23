#include <iostream>

using namespace std;

// 死循环
int main() {

	// 1.程序的漏洞
	/*double d = 1;

	while (d < 2) {
		cout << "hello" << endl;
		d *= 0.2;
		cout << d << endl;
	}*/

	/*
		案例：篮球从5米高的地方掉下来，每次弹起的高度是原来的30%，
		经过几次弹起，篮球的高度小于0.1米。
	*/
	double high = 5.0;
	int count = 0;
	while (true) {
		if (high < 0.1) {
			break;
		}
		count++;
		high *= 0.3;
	}

	cout << count << endl;


	return 0;
}