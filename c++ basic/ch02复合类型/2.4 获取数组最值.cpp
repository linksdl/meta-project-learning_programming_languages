#include <iostream>

using namespace std;

// 获取数组中的最值（最大值或者最小值）
int main() {

	/*
		1.定义一个变量max记录数组中的最大值，默认让他为第一个元素的值
		2.遍历数组，从第二个元素开始遍历
		3.每遍历一个数，需要跟当前的最大值进行比较
			如果大于当前的最大值，那么让max为当前遍历到的值
			如果小于当前的最大值，那么继续往后遍历元素
	*/

	// 定义一个数组
	int arr[5] = {20, 5, 80, 101, 99};

	// 定义一个变量记录当前的最大值
	int max = arr[0];
	int min = arr[0];

	// 遍历数组进行比较
	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {

		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}

	}

	// 输出最大值
	cout << "数组中最大值为：" << max << endl;
	// 输出最小值
	cout << "数组中最小值为：" << min << endl;

	return 0;
}