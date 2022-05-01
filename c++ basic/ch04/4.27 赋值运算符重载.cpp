#include <iostream>
#pragma warning(disable:4996)
using namespace std;

/*
	编译器默认会给一个类添加4个函数
	构造函数（空实现） 析构函数（空实现） 拷贝构造（值拷贝） operator= (值拷贝)
*/

class Person {
public:

	char* m_Name;	// 姓名

	Person& operator=(const Person& p) {

		// 先判断自身堆区是否有数据，如果有先释放
		if (m_Name != nullptr) {
			delete[] m_Name;
			m_Name = nullptr;
		}

		m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(m_Name, p.m_Name);

		return *this;
	}

	Person() {
		cout << "Person的默认构造" << endl;
	}

	Person(const char* name) {
		cout << "Person的有参构造" << endl;
		m_Name = new char[strlen(name) + 1];
		strcpy(m_Name, name);
	}

	Person(const Person& p) {
		m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(m_Name, p.m_Name);
	}

	~Person() {
		cout << "Person的析构函数" << endl;
		if (m_Name != nullptr) {
			delete[] m_Name;
			m_Name = nullptr;
		}
	}
};

// 赋值运算符重载  =
int main() {

	Person p1("Tom");
	Person p2;
	Person p3("Jerry");

	p2 = p1 = p3;

	cout << "p1的姓名：" << p1.m_Name << endl;
	cout << "p2的姓名：" << p2.m_Name << endl;

	Person p4(p3);


	return 0;
}