#include <iostream>
using namespace std;

// 指针数组：本质还是数组，数组中的每个元素的类型是指针类型。
int main() {

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;

	// 需求：定义一个数组，保存四个变量的地址。
	int* arr[4] = { &num1, &num2, &num3,&num4 };

	// 对数组中的元素进行操作
	*arr[2] = 300;
	cout << *arr[2] << endl;

	cout << sizeof(arr) << endl; // 16, 32
	cout << sizeof(arr[0]) << endl; // 4, 8

	// 对指针数组进行变量
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << "---" << *arr[i] << endl;
	}

	return 0;
}