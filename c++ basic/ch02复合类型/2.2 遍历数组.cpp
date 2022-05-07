#include <iostream>

using namespace std;

// 演示数组的遍历
int main() {

	// 创建一个数组
	int arr[5] = { 1,2,3,4,5 };

	// 遍历数组
	/*cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;*/

	/*for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}*/

	/*int arrByte = sizeof(arr);
	cout << arrByte << endl;

	int len = arrByte / sizeof(arr[0]);

	cout << len << endl;

	for (int i = 0; i < len; i++) {
		cout << (arr[i]+=2) << endl;
	}*/

	// 基于范围的遍历
	/*for (int i : arr) {
		cout << (i+=1) << endl;
	}*/

	/*for (int i : arr) {
		cout << i << endl;
	}*/

	for (int x : {3, 5, 8, 6}) {
		cout << x << endl;
	}

	return 0;
}