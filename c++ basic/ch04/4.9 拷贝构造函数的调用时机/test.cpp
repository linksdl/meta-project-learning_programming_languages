#include <iostream>
using namespace std;

class Person {

public:
	int m_Age;

	Person() {
		m_Age = 0;
		cout << "默认构造函数" << endl;
	}

	Person(int age) {
		m_Age = age;
		cout << "有参构造函数" << endl;
	}

	// 拷贝构造函数
	Person(const Person & p) {
		m_Age = p.m_Age;
		cout << "拷贝构造函数" << endl;
	}

	~Person() {
		cout << "析构函数" << endl;
	}

};

void doWork(Person p) {	// Person p = p1;

}

Person doWork1() {
	Person p(30);
	return p;
}

// 拷贝构造函数的调用时机
int main() {

	// 1.用一个对象初始化另外一个对象
	Person p1(10);
	// Person p2(p1);
	// cout << p2.m_Age << endl;
	// Person p3 = Person(p1);
	// cout << p3.m_Age << endl;
	// Person p4 = p1;	// Person p4 = Person(p1);
	// cout << p4.m_Age << endl;

	// 2.对象以值传递的方式传递给函数参数
	// doWork(p1);

	// 3.函数局部对象以值传递的方式从函数返回
	Person p5 = doWork1();

	/*
		编译器会采用一种优化  RVO(Return Value Optimization)
	*/

	return 0;
}