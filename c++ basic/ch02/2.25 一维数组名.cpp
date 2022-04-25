#include <iostream>
using namespace std;

// 一维数组名
int main() {

	// 创建一个数组
	int arr[5] = { 10,20,30,40,50 };

	// 数组名arr当成类型, 用在sizeof()函数中，表示的是数组的总大小
	cout << sizeof(arr) << endl;	// 20

	// 数组名可以作为地址，代表的是首元素的地址。
	cout << arr << endl;	// int *
	cout << arr + 1 << endl;

	cout << "----------------------" << endl;

	cout << "arr[1] = " << arr[1] << endl;
	cout << "*(arr + 1) = " << *(arr + 1) << endl;

	// arr[1] 展开 *(arr + 1) : []外边的值在+号的左边，[]里面的值在+号的右边
	cout << "1[arr] = " << 1[arr] << endl;
	cout << "*(1 + arr) = " << *(1 + arr) << endl;

	// [] 是对 *() 的缩写 
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		// cout << arr[i] << endl;
		// cout << i[arr] << endl;
		cout << *(arr + i) << endl;
	}

	// 推导，数组名作为地址，是首元素的地址
	// &arr[0] == &*(arr + 0) == arr + 0  == arr

	return 0;
}