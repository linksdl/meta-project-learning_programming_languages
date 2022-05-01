#include <iostream>
using namespace std;

// 定义一个函数，遍历二维数组中的元素
void print2Arr(int arr[][3], int count) {

	for (int r = 0; r < count; r++) {

		for (int c = 0; c < 3; c++) {
			cout << arr[r][c] << "\t";
		}
		cout << endl;
	}

}

void print2Arr1(int (*arr)[3], int count) {

	for (int r = 0; r < count; r++) {

		for (int c = 0; c < 3; c++) {
			cout << arr[r][c] << "\t";
		}
		cout << endl;
	}

}

// 定义一个函数，计算二维数组元素的和
int getSum(int* p, int row, int col) {

	// 定义一个累加变量
	int sum = 0;
	for (int i = 0; i < row * col; i++) {
		sum += *p;
		p++;
	}

	return sum;

}

// 函数和二维数组
int main() {

	// 创建一个二维数组
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	// 遍历二维数组中的元素
	// 计算二维数组元素的个数
	int count = sizeof(arr) / sizeof(arr[0]);
	// cout << count << endl;

	// print2Arr1(arr, count);

	int sum = getSum(arr[0], 2, 3);
	cout << sum << endl;

	return 0;
}