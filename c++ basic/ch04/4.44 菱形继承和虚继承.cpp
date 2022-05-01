#include <iostream>
using namespace std;

// 菱形继承和虚继承
/*
	如果有两个派生类继承了同一个基类，然后又有一个类同时继承这两个派生类，这种继承我们称之为
	菱形继承，或者钻石型继承。

			A
		B		C
			D

				Person
	Singer					 Waiter
			 SingingWaiter

	菱形继承带来的问题：
		1.歌手继承了人的成员，服务员同样继承了人类的成员
		当唱歌的服务员调用访问成员的时候，会产生二义性。（加上作用域）

		2.唱歌的服务员继承自人的数据有两份，浪费了内存。

	菱形继承带来的问题的解决方案：虚继承

*/

// 人类
class Person {
public:
	int m_Age;	// 年龄
};

// 歌手类  加上virtual后就是虚继承，Person类被称为虚基类。
class Singer :virtual public Person {

};

// 服务员类
class Waiter :public virtual Person {

};

// 唱歌的服务员
class SingingWaiter : public Singer, public Waiter {

};


int main() {

	// 创建一个SingingWaiter的对象
	SingingWaiter sw;

	// 问题1： 访问同名的成员产生二义性
	sw.m_Age = 200;
	/*sw.Singer::m_Age = 20;
	sw.Waiter::m_Age = 30;*/

	// 问题2：继承了两份数据，浪费了内存
	cout << sw.Singer::m_Age << endl;
	cout << sw.Waiter::m_Age << endl;


	return 0;
}