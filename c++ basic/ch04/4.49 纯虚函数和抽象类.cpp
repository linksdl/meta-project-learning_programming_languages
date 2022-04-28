#include <iostream>
using namespace std;

class Base {
public:

	/*
		纯虚函数的语法： virtual 返回值类型 函数名(形参列表) = 0;
		纯虚函数，不需要有实现，可以和普通的函数共存
		有了纯虚函数的类，也称为抽象类
		抽象类无法实例化对象
		子类必须要重写父类纯虚函数，否则子类也是抽象类
	*/
	virtual void func() = 0;
	
};

class Son : public Base {
public:

	virtual void func() {

	}

};

// 纯虚函数和抽象类
int main() {

	// Base base;	// 抽象类无法实例化对象
	// Son s;	// 子类必须要重写父类纯虚函数，否则子类也是抽象类
	Son s;

	return 0;
}