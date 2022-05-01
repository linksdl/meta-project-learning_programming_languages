#include <iostream>
using namespace std;

// 常函数和常对象
/*
	1.用const修饰成员函数时，const修饰this指针指向的内存区域，
	成员函数体内不能修改本类中的任何普通成员变量。这个函数我们称之为常函数。

	2.当成员变量类型前面被mutable修饰除外
*/

// 人类
class Person {
public:

	int m_Age;	// 年龄

	mutable int m_Height;	// 身高

	Person(int age) {
		this->m_Age = age;
	}

	// this指针的本质  指针常量   Person* const this;
	// 如果想让this指针指向的对象的内容不能被修改，const Person* const this;
	void show() const{		// 常函数

		// this = nullptr;
		// this->m_Age = 200;	
		this->m_Height = 180;

		cout << this->m_Age << endl;
	}

	void show1(){}

};

int main() {

	// 创建一个Person对象
	Person p1(20);
	p1.show();

	// 常对象
	const Person p2(30);	// 常对象
	// p2.m_Age = 20;	// 常对象不能修改内容
	p2.m_Height = 190;	// 常对象可以修改mutable修饰的成员变量

	p2.show();	// 常对象可以调用常函数
	// p2.show1();	// 常对象不能调用普通函数


	return 0;
}