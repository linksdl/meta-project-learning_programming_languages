#include <iostream>
using namespace std;

// 字符指针数组
int main() {

	// "hahaha", "hehehe", "xixixi", "huhuhu"
	// 需求：定义一个数组，存放上面4个字符串的首元素的地址。
	// 创建数组的格式： 数据类型  数组名[元素的个数];

	// 字符指针数组, 保存的地址值，而不是具体的字符串的内容。
	const char* arr[4] = { "hahaha", "hehehe", "xixixi", "huhuhu" };

	cout << sizeof(arr) << endl;	// 16

	// 遍历数组
	for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++) {
		cout << arr[i] << endl;
	}

	cout << *(arr[1] + 2) << endl; // hehehe - h

	// *(arr[1] + 2)
	// 把arr[1] 看成 A
	// *(A + 2)
	// A[2] 
	// arr[1][2]	二维数组

	return 0;
}