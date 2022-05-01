#include <iostream>
#include <string>
using namespace std;

/*
	this指针
	this指针指向用来调用成员函数的对象,谁调用方法，this指针就指向谁。
	this被作为隐式参数传递给方法，每一个非静态的成员方法中都有this指针。

	this指针的作用：
		1.当形参和成员变量同名时，可以用this指针来区分。
		2.在类的非静态的成员方法中返回对象本身，可以使用return *this;

*/

// 人类
class Person {
public:

	string name;	// 姓名
	int age;		// 年龄

	// 无参的构造函数
	Person() {}

	// 有参的构造函数
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	// 用来获取两个对象中年龄比较大的那个对象
	Person& getOlder(Person& p) {
		if (age > p.age) {
			return *this;
		}
		else {
			return p;
		}
	}

};

int main() {

	// 创建一个Person对象
	Person p1("zs", 20);
	cout << "姓名：" << p1.name << endl;
	cout << "年龄：" << p1.age << endl;

	Person p2("ls", 21);
	cout << "姓名：" << p2.name << endl;
	cout << "年龄：" << p2.age << endl;

	p1.getOlder(p2);

	
	return 0;
}