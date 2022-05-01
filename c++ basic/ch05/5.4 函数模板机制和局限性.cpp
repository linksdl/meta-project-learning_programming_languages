#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

/*
	函数模板的机制：
	1.编译器并不是把函数模板处理成能够处理任何类型的函数
	2.函数模板通过具体的类型产生不同的函数（模板函数）
	3.编译器会对函数模板进行两次编译，在声明的地方对模板代码本身进行编译，在调用的地方
	对参数替换后的代码进行编译。
*/

class Person {

public:

	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	/*bool operator==(Person &p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		else {
			return false;
		}
	}*/

	string m_Name;
	int m_Age;
};

template<class T>
bool myCompare(T& a, T& b) {
	return a == b;
}

// 模板并不是真正的通用，对于特殊的数据类型，可以具体化实现，来解决问题
// 语法：template <> 返回值类型 函数名 （参数列表） {}
template<> bool myCompare(Person& p1, Person& p2) {
	cout << "具体化调用了..." << endl;
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age) {
		return true;
	}
	else {
		return false;
	}
}

template<class T>
void fun(T a, T b) {
	a + b;
}

//void fun(int a, int b) {
//	a + b;
//}

// 函数模板机制和局限性
int main() {

	/*int a = 10;
	int b = 20;
	fun(a, b);

	Person p1;
	Person p2;
	fun(p1, p2);*/

	int a = 20;
	int b = 20;
	bool ret = myCompare(a, b);
	cout << ret << endl;


	Person p1("Tom", 10);
	Person p2("Tom", 20);
	ret = myCompare(p1, p2);
	cout << ret << endl;

	return 0;
}