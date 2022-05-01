#include <iostream>
using namespace std;

/*
	初始化列表语法一般是用来对const修饰的成员进行初始化。
	对于引用类型的成员，也必须使用初始化列表的语法进行初始化。
*/
class Person {
public:
	int m_A;
	int m_B;
	int m_C;

	const int m_D;

	//Person() {
	//	m_A = 0;
	//	m_B = 0;
	//	m_C = 0;
	//	// m_D = 100;
	//}

	

	// 初始化列表的语法
	Person() : m_A(10), m_B(20), m_C(30), m_D(40) {
	}

	Person(int a, int b, int c, int d) : m_A(a), m_B(b), m_C(c), m_D(d) {
	}

};

// 初始化列表 （一种语法，用来对成员数据进行初始化）
int main() {

	// Person p;
	
	Person p(100, 200, 300, 1000);
	cout << p.m_A << endl;
	cout << p.m_B << endl;
	cout << p.m_C << endl;
	cout << p.m_D << endl;

	return 0;
}