#include <iostream>

using namespace std;

/*
	实现二分查找
	前提：数组中的元素必须有序
*/
int main() {

	int arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	// 需要查找的元素是40
	int key = 55;

	int len = sizeof(arr) / sizeof(int);

	// 定义两个变量记录移动的索引
	int low = 0;
	int high = len - 1;

	// 定义一个变量记录找到的元素的索引
	int index = -1;

	while (low <= high) {
		// 定义一个中间索引的变量
		int mid = (low + high) / 2;

		// 比较
		if (arr[mid] < key) {
			low = mid + 1;
		}
		else if (arr[mid] > key) {
			high = mid - 1;
		}
		else {
			index = mid;
			break;
		}

	}

	if (index == -1) {
		cout << "没有找到元素" << endl;
	}
	else {
		cout << "找到了元素，索引为：" << index;
	}


	return 0;
}