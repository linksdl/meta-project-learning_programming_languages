#include <iostream>
using namespace std;

/*
	说明：如果把数组作为函数的参数，那么编译器会进行优化。
	编译器会将数组参数转换成 指针类型的变量，用于接收数组的首元素的地址。

*/

// 定义一个函数，将数组作为参数传递进来，函数中遍历数组的元素。
void printArr(int arr[]) {	// 优化 int * p

	cout << "printArr sizeof(arr) --- " << sizeof(arr) << endl;	// 4

	// 获取数组的长度（数组元素的个数）
	int len = sizeof(arr) / sizeof(arr[0]);

	// 遍历
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "\t";	// arr[i] == *(arr + i)
	}
	cout << endl;

}

void printArr1(int * arr, int count) {	// 优化 int * p

	// 遍历
	for (int i = 0; i < count; i++) {
		cout << arr[i] << "\t";	// arr[i] == *(arr + i)
	}
	cout << endl;

}


// 函数和数组
int main() {

	// 创建一个数组
	int arr[5] = { 0 };

	int len = sizeof(arr) / sizeof(arr[0]);

	// cout << "main sizeof(arr) --- " << sizeof(arr) << endl;	// 20

	// 调用遍历数组的函数
	printArr1(arr, len);

	// printArr(arr);


	return 0;
}