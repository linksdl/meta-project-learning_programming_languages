#include <iostream>
using namespace std;

// 递归案例
/*
	需求：有一对兔子，从出生后第3个月起每个月都生一对兔子，
	小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，
	问第二十个月的兔子对数为多少？

	月份数		1		2		3		4		5		6		7
	兔子对数		1		1		2		3		5		8		...
				A		A		A		A		A		A
								B		BC		BCD		BCDF
												E		EGH

	1		1		2		3		5		8		...
	结论：从第三个数开始，每个数是前两个数的和。
	（斐波那切数列）

*/

// 定义一个函数，用于计算第n个月兔子的总对数
int getSum(int n) {

	if (n == 1 || n == 2) {
		return 1;
	}else {
		return getSum(n - 1) + getSum(n - 2);
	}

}

int main() {

	// 1.使用for循环完成
	// 创建一个数组，用于保存每个月兔子的对数
	//int arr[20];

	//// 第一个月
	//arr[0] = 1;
	//arr[1] = 1;

	//for (int i = 2; i < 6; i++) {
	//	arr[i] = arr[i - 1] + arr[i - 2];
	//}

	//cout << "第20个月兔子的总对数是: " << arr[5] << endl;

	// 使用递归完成
	int sum = getSum(20);
	cout << sum << endl;

	return 0;
}