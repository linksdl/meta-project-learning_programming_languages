#include <iostream>

using namespace std;

// 数组元素查找
int main() {

	/*
		要查找数组中的K元素
		1.遍历数组，获取每个元素
		2.和要查找的数据K进行比较
		3.如果相等，就查找到了元素，将当前的索引值。
	*/

	// 创建一个数组
	int arr[5] = { 78, 69, 56, 10, 20 };

	// 查找元素
	int num = 80;

	int len = sizeof(arr) / sizeof(int);

	// 定义一个变量记录查找到的元素的索引
	int index = -1;

	for (int i = 0; i < len; i++) {

		if (num == arr[i]) {
			index = i;
			break;
		}
		else {
			continue;
		}

	}

	// 输出结果
	if (index == -1) {
		cout << "没有查找到元素" << endl;
	}
	else {
		cout << "元素的索引是：" << index << endl;
	}




	return 0;
}