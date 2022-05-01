#include <iostream>
using namespace std;

// 静态成员
/*
	在类定义中，它的成员（成员变量，成员方法），这些成员都可以用关键字static进行声明
	，称之为静态成员。（静态成员变量，静态成员方法）

	特点：不管这个类创建了多少个对象，静态成员只有一个拷贝。这个拷贝被所有属于这个类的对象所共享。

	静态成员变量:
		1.必须在类中声明，在类外定义
		2.静态成员变量不属于某个对象，而是属于类，所有对象共享
		3.静态成员变量可以通过类名或者对象名来获取。

	静态成员函数：
		1.静态的成员函数不能访问非静态的成员变量，但是可以访问静态的成员变量
		2.普通的成员函数可以访问静态或者非静态的成员变量、成员函数。
		3.可以通过类名或者对象名来访问。
*/

class Person {
public:

	int m_A;	// 普通的成员变量
	static int m_B;	// 静态的成员变量 在类内进行声明
    static double m_C;

	// 静态的成员函数
	static void fun() {
		// m_A = 10;
		m_B = 2000;
        m_C = 3.1415;
//        m_A = 10; // error
		cout << "静态成员函数被调用了" << endl;
	}

	void fun1() {
		m_A = 20;
		m_B = 200;
	}

};

int Person::m_B = 100;	// 静态成员变量在类外定义

int main() {

	//Person p1;
	//cout << p1.m_B << endl;

	//Person p2;
	//cout << p2.m_B << endl;
	//p2.m_B = 1000;	// 通过p2修改m_B静态成员变量，p1访问是修改后的结果，静态成员变量被类的所有对象所共享。
	//cout << p1.m_B << endl;
	//cout << Person::m_B << endl;

	Person::fun();

	return 0;
}