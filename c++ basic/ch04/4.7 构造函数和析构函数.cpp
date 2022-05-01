#include <iostream>
#include <string>
using namespace std;

// 定义一个Person类
class Person {
public:
	string m_Name;	// 姓名
	int m_Age;	// 年龄

	// 构造函数
	Person() {
		m_Name = "";
		m_Age = 0;
		cout << "无参的构造函数执行了..." << endl;
	}

	// 有参的构造函数  重载
	Person(string name, int age) {
		m_Name = name;
		m_Age = age;
		cout << "有参的构造函数执行了..." << endl;
	}

	// 析构函数
	~Person() {
		cout << "析构函数执行了..." << endl;
	}


};

// 构造函数和析构函数
/*
	构造函数：主要作用就是用于在创建对象时为对象的成员进行初始化
	析构函数：主要作用就是用于在对象销毁前，执行一些清理工作

	构造函数和析构函数，如果没有手动提供，编译器会提供一个默认的。
	默认的构造函数和析构函数中，什么都不做。编译器会强制执行。

	构造函数和析构函数写到公共权限下

	构造函数：
		1.构造函数名和类名相同
		2.没有返回值，不用写void
		3.允许多个参数，可以重载

	析构函数：
		1.析构函数名和类名相同 前面加上~
		2.没有返回值，不用写void
		3.不允许有多个参数，无参的，不可以重载

	构造函数和析构函数由编译器自动调用一次，无需手动调用。
	如果没有提供构造函数，编译器会自动提供一个无参的空实现的构造函数。
	如果没有提供析构函数，编译器会自动提供一个无参的空实现的析构函数。
*/
int main() {

	// 创建Person对象
	Person p;
	// 对成员进行设置
	/*p.m_Name = "zs";
	p.m_Age = 20;*/

	cout << p.m_Name << endl;
	cout << p.m_Age << endl;

	system("pause");

	return 0;
}