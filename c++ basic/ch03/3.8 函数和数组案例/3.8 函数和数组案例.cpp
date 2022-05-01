#include <iostream>
#include "arr.h"
using namespace std;

// 函数和数组的案例
int main() {

	// 创建一个数组
	int arr[5] = { 24, 69, 80, 57, 13 };

	// 获取元素的个数
	int len = sizeof(arr) / sizeof(arr[0]);

	// 遍历数组
	printArr(arr, len);

	// 计算数组元素的和
	int sum = getSum(arr, len);
	cout << sum << endl;

	// 获取最值
	int max;
	int min;
	getMaxAndMin(arr, len, &max, &min);
	cout << "最大值：" << max << "  最小值：" << min << endl;

	// 排序
	bubbleSort(arr, len);

	// 遍历数组
	printArr(arr, len);


	return 0;
}