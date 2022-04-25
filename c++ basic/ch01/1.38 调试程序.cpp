#include <iostream>

using namespace std;

// 函数原型
int getSum(int, int);

// 断点调试（1.查看程序的执行流程 2.查看数据的变化情况）
int main() {

	int x = 10;
	int y = 20;

	int sum = getSum(x, y);

	cout << sum << endl;

	return 0;
}

int getSum(int a, int b) {

	int sum = a + b;
	return sum;

}
