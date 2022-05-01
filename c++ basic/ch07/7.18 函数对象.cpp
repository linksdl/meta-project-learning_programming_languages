#include <iostream>
using namespace std;

// 1.仿函数，重载()运算符的类，使得对象在使用阶段像函数调用
class MyPrint {
public:
	void operator()(string test) {
		cout << test << endl;
		m_Count++;
	}
	int m_Count = 0;
};

void test01() {
	MyPrint mp;
	mp("hello world");	//  不是真正的函数，而是一个对象
}

// 2.仿函数，超出普通函数的概念，可以拥有自己的一些内部状态
void test02() {
	MyPrint mp;
	mp("hello");
	mp("hello");
	mp("hello");
	mp("hello");
	mp("hello");

	cout << "mp 使用的次数为：" << mp.m_Count << endl;
}

void myPrint(string test) {
	cout << test << endl;
}

// 3.函数对象可以作为函数的参数
void doWork(MyPrint mp, string str) {
	mp(str);
}

void test03() {
	MyPrint mp;
	doWork(mp, "hello");
}

// 函数对象
int main() {

	test03();

	return 0;
}