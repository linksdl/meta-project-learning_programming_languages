#include <iostream>
#include <string>
using namespace std;

class Person {
public:

	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person& p) {
		/*if (m_Name == p.m_Name && m_Age == p.m_Age) {
			return true;
		}
		else {
			return false;
		}*/
		return (m_Name == p.m_Name && m_Age == p.m_Age);
	}

	bool operator!=(const Person& p) {
		/*if (m_Name == p.m_Name && m_Age == p.m_Age) {
			return false;
		}
		else {
			return true;
		}*/
		return !(m_Name == p.m_Name && m_Age == p.m_Age);
	}

	bool operator>(const Person& p) {
		return m_Age > p.m_Age;
	}

	string m_Name;	// 姓名
	int m_Age;		// 年龄
};

// 关系运算符重载		== != > >= < <=
int main() {

	/*int a = 10;
	int b = 10;
	if (a == b) {
		cout << "a == b" << endl;
	}
	else {
		cout << "a != b" << endl;
	}*/

	// 创建两个Person对象
	Person p1("Tom", 20);
	Person p2("Tom", 18);

	if (p1 == p2) {	// p1.operator==(p2)
		cout << "p1 == p2" << endl;
	}else {
		cout << "p1 != p2" << endl;
	}

	if (p1 != p2) {	// p1.operator!=(p2)
		cout << "p1 != p2" << endl;
	}
	else {
		cout << "p1 == p2" << endl;
	}

	if (p1 > p2) {
		cout << "p1 > p2" << endl;
	}
	else {
		cout << "p1 不大于 p2" << endl;
	}

	return 0;
}