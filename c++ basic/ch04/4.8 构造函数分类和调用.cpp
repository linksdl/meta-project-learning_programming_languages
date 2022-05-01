#include <iostream>
using namespace std;

// 构造函数的分类和调用
/*
	构造函数的分类：
		分类方式1：参数		无参构造（默认构造）	有参构造
		分类方式2：类型		普通构造				拷贝构造

	如果我们提供了构造函数，系统将不会提供无参的默认构造函数。
*/

class Person {
public:
	int m_Age;	// 年龄

	// 无参构造
	Person() {
		m_Age = 0;
		cout << "无参构造函数调用了..." << endl;
	}

	// 有参构造
	Person(int age) {
		m_Age = age;
		cout << "有参构造函数调用了..." << endl;
	}

	// 拷贝构造函数 一个对象数据拷贝到另一个对象
	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "拷贝构造函数调用了..." << endl;
	}

	~Person() {
		cout << "析构函数调用了..." << endl;
	}

};

int main() {

	// 构造函数如何调用
	// 调用有两种方式：显示调用  隐式调用

	// 显示调用
	Person p = Person();
	Person p1 = Person(20);
	cout << p1.m_Age << endl;
	/*
	Person p4(p);
	Person p5 = Person(p);*/

	// 隐式调用
	/*Person p2;
	Person p3(30);*/
	// 隐式调用无参构造函数不能加上括号
	// Person p2(); 函数声明

	// 匿名对象, 本行执行完了以后立即释放
	// Person();
	// Person(p);	// 编译器认为 Person p;

	// 隐式转换法
	Person p6 = 10;	// 编译器会转换成 Person p6 = Person(10);

	// 利用隐式转换法调用拷贝构造函数
	Person p7 = p6;	// 转换 Person p7 = Person(p6);

	// 初始化列表
	/*Person p8 = {};
	Person p9{20};
	Person p10 = { 22 };*/

	return 0;
}