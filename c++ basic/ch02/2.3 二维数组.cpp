#include <iostream>

using namespace std;

// 演示二维数组的使用
int main() {

	// 创建一个二维数组
	// 存储3个学生每个学生4次考试成绩
	int scores[3][4] = {
		{100, 99, 69, 98},
		{99, 89, 78, 100},
		{50, 59, 61, 99}
	};

	// 访问元素
	// 获取第二个学生第三次考试成绩
	cout << scores[1][2] << endl;

	// 遍历二维数组
	int len = sizeof(scores) / sizeof(scores[0]);
	int len1 = sizeof(scores[0]) / sizeof(int);

	for (int i = 0; i < len; i++) {

		for (int j = 0; j < len1; j++) {
			cout << scores[i][j] << "\t";
		}
		cout << endl;

	}

	// 其他的初始化方式
	int arr[3][4] = { {1, 2}, {5}, {6, 7, 8} };
	int arr1[3][4] = { 1, 2, 3, 4, 5, 6, 7 };

	int scores1[3][4] = {
		{100, 99, 69, 98},
		{99, 89, 78, 100},
		{50, 59, 61, 99}
	};

	return 0;
}