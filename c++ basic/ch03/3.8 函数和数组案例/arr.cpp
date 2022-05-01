#include <iostream>
using namespace std;

// 1.遍历数组
void printArr(int* arr, int count) {
	for (int i = 0; i < count; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}

// 2.计算数组的元素和
int getSum(int* arr, int count) {
	int sum = 0;
	for (int i = 0; i < count; i++) {
		sum += arr[i];
	}
	return sum;
}

// 3.获取数组最值
void getMaxAndMin(int* arr, int count, int* max, int* min) {

	int maxValue = arr[0];
	int minValue = arr[0];

	for (int i = 1; i < count; i++) {
		if (arr[i] > maxValue) {
			maxValue = arr[i];
		} else if (arr[i] < minValue) {
			minValue = arr[i];
		}
	}

	*max = maxValue;
	*min = minValue;

}

// 4.对数组排序（冒泡排序）
void bubbleSort(int* arr, int count) {

	for (int i = 0; i < count - 1; i++) {

		for (int j = 0; j < count - 1 - i; j++) {

			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}

	}

}