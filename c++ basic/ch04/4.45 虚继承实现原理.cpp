#include <iostream>
using namespace std;

// 人类
class Person {
public:
	int m_Age;	// 年龄
};

// 歌手类
class Singer :virtual public Person {

};

// 服务员类
class Waiter :virtual public Person {

};

// 会唱歌的服务员类
class SingingWaiter :public Singer, public Waiter {

};

// 虚继承的实现原理
/*
	vbptr: virtual base pointer(虚基类指针)
	原理：只有一个唯一的成员，通过保存虚基类指针，这个指针指向的是一张表（虚基类表）
	这个表中保存了当前获取到唯一的数据的偏移量。
	
*/
int main() {

	SingingWaiter sw;
	sw.m_Age = 20;

	// 通过Singer找到偏移量
	cout << "Singer的偏移量 ： " << *((int*)*(int*)&sw + 1) << endl;

	// 通过Waiter找到偏移量
	cout << "Waiter的偏移量 ： " << *((int*)*((int*)&sw + 1) + 1) << endl;

	// 获取age的值
	cout << *(int*)((char*)&sw + *((int*)*(int*)&sw + 1)) << endl;

	return 0;
}