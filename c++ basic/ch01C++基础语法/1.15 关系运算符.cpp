#include <iostream>

using namespace std;

// 演示关系运算符
int main() {

	int a = 10;
	int b = 20;
	int c = 3;

	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;
	cout << (a == b) << endl;
	cout << (a != b) << endl;

	cout << ((a + b) * c > (c + b) * a) << endl;

	/*
		注意事项：
			1.无论表达式多么复杂，关系运算符最终的结果肯定是bool类型的值
			2.== 不能写成 =
	*/

	// 先把b的值赋值给a,然后将a的值通过cout输出。
	cout << (a = b) << endl;


	return 0;
}