#include <iostream>

using namespace std;

// 函数的原型
int getSum(int, int);

void print();

// 函数的使用
int main() {

	int sum = getSum(1,2);

	cout << sum << endl;

	print();
	print();
	print();

	return 0;
}

int getSum(int a, int b) {
	int sum = a + b;
	return sum;
}

void print() {
	cout << "HelloWorld" << endl;
	// return;
}