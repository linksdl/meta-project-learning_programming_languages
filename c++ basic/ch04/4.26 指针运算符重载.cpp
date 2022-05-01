#include <iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		cout << "Person的构造函数" << endl;
		m_Age = age;
	}

	// 输出成员的信息
	void showAge() {
		cout << "m_Age = " << this->m_Age << endl;
	}

	~Person(){
		cout << "Person的析构函数" << endl;
	}

	int m_Age;
};

// 智能指针类
class SmartPointer {
public:

	Person* operator->() {
		return this->m_Person;
	}

	Person& operator*() {
		return *m_Person;
	}

	SmartPointer(Person* p) {
		m_Person = p;
	}

	Person* m_Person;	// 内部维护的Person的指针

	~SmartPointer() {
		cout << "SmartPointer析构函数" << endl;
		if (this->m_Person != nullptr) {
			delete this->m_Person;
			this->m_Person = nullptr;
		}
	}
};

// 指针运算符重载		->  *
int main() {

	// 创建Person的对象
	Person* p = new Person(30);
	p->showAge();
	(*p).showAge();

	// delete p;
	cout << "==============" << endl;
 
	SmartPointer sp(p);
	sp->showAge();		// sp.operator->();
	// sp->->showAge(); 编译器会优化成 sp->showAge();
	(*sp).showAge();


	return 0;
}