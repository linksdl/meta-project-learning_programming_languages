#include <iostream>

using namespace std;

/*
	案例：完成数组元素反转
	如：[18, 5, 24, 55, 76] 反转后 [76, 55, 24, 5, 18]
*/
int main() {
	/*
		1. 定义2个变量记录需要被交换的两个索引值
			i初始为0，j初始为len-1
		2. 遍历数组中的元素，交换两个索引处的元素
		3. i++  j--， 交换两个索引处的元素
		4. 加上循环，循环结束的条件 j <= i

	*/

	int arr[5] = {18, 5, 24, 55, 76};

	int len = sizeof(arr) / sizeof(arr[0]);
	/*int i = 0;
	int j = len - 1;

	while (i < j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}*/

	for (int i = 0, j = len - 1; i < j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}


	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}



	return 0;
}