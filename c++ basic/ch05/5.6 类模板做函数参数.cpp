#include <iostream>
using namespace std;

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson() {
		cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

// 1.指定传入的具体的类型
void doWork(Person<string, int>& p){
	p.showPerson();
}

void test1() {
	Person<string, int> p("Tom", 20);
	doWork(p);
}

// 2.将参数模板化
template<class T1, class T2>
void doWork2(Person<T1, T2>& p) {
	cout << "T1 = " << typeid(T1).name() << endl;
	cout << "T2 = " << typeid(T2).name() << endl;
	p.showPerson();
}

void test2() {
	Person<string, int> p("Jerry", 20);
	doWork2(p);
}

// 3.将类模板化
template<class T>
void doWork3(T& p) {
	cout << "T = " << typeid(T).name() << endl;
	p.showPerson();
}

void test3() {
	Person<string, int> p("Bill", 30);
	doWork3(p);
}


// 类模板做函数参数
int main() {

	// test1();
	// test2();
	test3();
	return 0;
}