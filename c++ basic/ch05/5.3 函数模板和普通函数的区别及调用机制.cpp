#include <iostream>
using namespace std;

/*
	普通函数和函数模板调用规则：
	1.C++编译器优先考虑普通函数
	2.可以通过空模板实例参数列表的语法限定编译器只能通过模板匹配
	3.函数模板可以像普通函数一样进行重载
	4.如果函数模板可以产生一个更好的匹配，那么优先选择模板
*/

// 1、区别
template<class T>
T myPlus(T a, T b) {
	return a + b;
}

int myPlus2(int a, int b) {
	return a + b;
}

// 2、调用规则
void myPrint(int a, int b) {
	cout << "普通函数myPrint调用" << endl;
}

template<class T>
void myPrint(T a, T b) {
	cout << "函数模板myPrint调用" << endl;
}

template<class T>
void myPrint(T a, T b, T c) {
	cout << "重载函数模板myPrint调用" << endl;
}

// 函数模板通过具体类型产生不同的函数
// 通过函数模板产生的函数 称为 模板函数
//void myPrint(int a, int b) {
//	cout << "函数模板myPrint调用" << endl;
//}
//
//void myPrint(int a, int b, int c) {
//	cout << "重载函数模板myPrint调用" << endl;
//}

void test2() {
	// 1. 如果普通函数和函数模板都可以匹配，优先使用普通函数
	int a = 10;
	int b = 20;
	myPrint(a, b);

	// 2. 如果想要强制调用函数模板，需要加上 空模板参数列表
	myPrint<>(a, b);

	// 3. 函数模板也可以发生函数重载
	myPrint(a, b, 10);

	// 4. 如果函数模板可以产生更好的匹配，那么优先使用函数模板
	char c1 = 'c';
	char c2 = 'd';
	myPrint(c1, c2);
}


void test1() {
	int a = 10;
	int b = 20;
	char c = 'c';

	// myPlus(a, c); 函数模板 用自动类型推导的时候，不会发生隐式类型转换
	cout << myPlus<int>(a, c) << endl;
	cout << myPlus2(a, c) << endl;

	/*cout << myPlus(a, b) << endl;
	cout << myPlus2(a, b) << endl;*/
}


// 函数模板和普通函数的区别以及调用机制
int main() {

	test2();


	return 0;
}