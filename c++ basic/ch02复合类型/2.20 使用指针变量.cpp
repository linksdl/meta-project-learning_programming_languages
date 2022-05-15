#include <iostream>
using namespace std;

// 演示如何使用指针变量
int main() {

	int  num = 10;
	int* p;
	p = &num;

	// p和&num 是同一个值
	cout << p << endl;
	cout << &num << endl;

	// 对p使用解除引用运算符
	// *p == num
	cout << *p << endl;

	*p = 100;
	cout << *p << endl;
	cout << num << endl;
	
	// num++
	(*p)++;	// (*p) = (*p) + 1;
	cout << *p << endl;
	cout << num << endl;

	cin >> *p;

	cout << *p << endl;

	// 野指针
	int* ptr = (int *)0x787878;
	*ptr = 10;

	// 空指针
	int* ptr1 = nullptr;
	// if(ptr1 == nullptr)


	return 0;
}