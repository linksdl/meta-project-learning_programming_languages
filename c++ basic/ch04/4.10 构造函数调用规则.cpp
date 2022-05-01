#include <iostream>
using namespace std;

// 构造函数的调用规则
/*
	默认情况下，C++编译器至少会为我们提供类的3个函数
		1.默认构造函数（无参， 函数体为空）
		2.默认析构函数（无参， 函数体为空）
		3.默认拷贝构造函数，对类中非静态成员属性进行简单的值拷贝

	如果用户定义了普通的构造（非拷贝构造），C++不会提供默认无参构造，但是会提供默认拷贝构造。
	如果用户定义了拷贝构造函数，C++不会提供任何默认构造函数

*/

class Person {

public:
	int m_Age;	// 年龄

	Person() {

	}

	Person(int age) {
		m_Age = age;
	}

	Person(const Person& p) {
		m_Age = p.m_Age;
	}

	~Person() {

	}

};


int main() {

	// 创建对象
	Person p1;
	Person p2 = p1;	// Person p2 = Person(p1);
	cout << p2.m_Age << endl;

	return 0;
}