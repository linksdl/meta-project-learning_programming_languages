#include <iostream>
using namespace std;

// 类模板成员函数的类内实现
//template <class T1, class T2>
//class Person {
//public:
//
//	Person(T1 name, T2 age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson() {
//		cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};

// 类模板成员函数的类外实现
template <class T1, class T2>
class Person {
public:

	Person(T1 name, T2 age);

	void showPerson();

	T1 m_Name;
	T2 m_Age;
};

template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
}

template <class T1, class T2>
void Person<T1, T2>::showPerson() {
	cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;

}

// 类模板成员函数类内和类外实现
int main() {

	Person<string, int> p("zs", 20);
	p.showPerson();

	return 0;
}