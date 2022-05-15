#include <iostream>
using namespace std;

// 在使用中， *（取值） 和 &（取地址）运算符之间的关系。
int main() {

	int num = 0;
	// int* p;

	// p = &num
	// num 是int类型
	// &num 是int * 类型
	// 总结：对变量取地址 & , 整个表达式类型上加上一个 *
	int* p = &num;	// int* p;  p = &num;

	p = &num;
	// p 是 int* 类型
	// *p == num 是int类型
	// 总结：在使用中，对指针变量使用 * ,整个表达式类型上减少一个 *
	
	// 注意：在使用中，当*和&同时出现时，从右往左，依次抵消。
	// &*&*&num == &num			&*&*&*p  == p

	// *p == num	为什么*p代表num的内容
	// p == &num;
	// *p == *&num;
	// *p == num;

	return 0;
}