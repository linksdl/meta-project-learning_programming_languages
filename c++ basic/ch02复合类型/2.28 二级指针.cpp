#include <iostream>
using namespace std;

// 二级指针	（一个指针变量保存的是另外一个指针变量的地址值）
int main() {

	int num = 10;

	int* p = &num;

	// 定义一个二级指针
	int** q = &p;

	cout << num << endl; // 10
	cout << p << endl;   // 008FFC3C
	cout << q << endl;   // 008FFC30

	cout << *p << endl;  // 10
	cout << *q << endl;  // 008FFC3C

	cout << **q << endl; // 10



	return 0;
}