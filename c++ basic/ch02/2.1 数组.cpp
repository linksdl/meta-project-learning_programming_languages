#include <iostream>

using namespace std;

// 数组的使用
int main() {

	// 声明数组
	/*int arr[5];
	arr[0] = 20;
	arr[1] = 30;

	cout << arr[0] << "---" << arr[1] << endl;*/

	// 数组的初始化
	int arr[5] = { 3, 5, 9, 10, 11 };
	cout << arr[2] << endl;

	int arr1[5] = { 3,5 };
	cout << arr1[4] << endl;

    int arr2[5] = {0};

	// 注意事项，访问数组的时候索引千万不要超过最大的索引。
	// cout << arr1[5] << endl;


	return 0;
}