#include <iostream>
using namespace std;

// 引用作为函数参数
// 函数参数传递的方式有3种：1.按值传递  2.按地址传递  3.按引用传递

// 1.按值传递
void valueSwap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// 2.按地址传递
void pointerSwap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 3.按引用传递
void refSwap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	int m = 10;
	int n = 20;
	// valueSwap(m, n);
	// pointerSwap(&m, &n);
	// refSwap(m, n);
	cout << "m : " << m << endl;
	cout << "n : " << n << endl;



	return 0;
}