#include <iostream>

using namespace std;

int main() {

	// 1. 打印4行5列的心形图
	/*
		*****
		*****
		*****
		*****
	*/

	/*cout << "*";
	cout << "*";
	cout << "*";
	cout << "*";
	cout << "*";*/

	/*for (int i = 1; i <= 5; i++) {
		cout << "*";
	}
	cout << endl;

	for (int i = 1; i <= 5; i++) {
		cout << "*";
	}
	cout << endl;

	for (int i = 1; i <= 5; i++) {
		cout << "*";
	}
	cout << endl;

	for (int i = 1; i <= 5; i++) {
		cout << "*";
	}
	cout << endl;*/

	for (int j = 1; j <= 4; j++) {
		for (int i = 1; i <= 5; i++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "==================" << endl;

	// 总结：外层循环控制行，内存循环控制列。

	/*
		打印如下的形状：
		*
		**
		***
		****
		*****
	*/

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}