#include <iostream>
using namespace std;

// 继承的三种方式
/*
	继承的基本语法： class 子类 : 继承的方式 父类 {};
	父类：超类、基类
	子类：派生类

	继承的三种方式：
	1.公有继承	public
	2.保护继承	protected
	3.私有继承	private

	派生类继承基类，派生类会拥有基类中全部的成员变量和成员方法。（构造、析构）,
	在派生类中，继承的成员不一定能够直接访问，不同的继承方式会导致不同的访问权限。

	
				基类成员权限			派生类成员权限
	公有继承		公有					公有
				保护					保护
				私有					不能够访问

	保护继承		公有					保护
				保护					保护
				私有					不能够访问

	私有继承		公有					私有
				保护					私有
				私有					不能够访问

	继承：不能随意去使用，必须是is a的关系（公有继承）
	保护继承可以实现has a的关系

*/

// 基类
class Base {
public:
	int a;
protected:
	int b;
private:
	int c;
};

// 子类  公有继承
class Son1 :public Base {

public:
	void func() {
		a = 10;	// 父类中的a到了子类中  是public
		b = 20; // 父类中的b到了子类中  是protected
		// c = 30;	// 父类中私有的c在子类中不能访问
	}

};

// 保护继承
class Son2 : protected Base {
public:
	void func() {
		a = 10;	// 父类中的a到了子类中  是protected
		b = 20; // 父类中的b到了子类中  是protected
		// c = 30;	// 父类中私有的c在子类中不能访问
	}
};

// 私有继承
class Son3 : private Base {
public:
	void func() {
		a = 10;		// 父类中的a到了子类中 是private
		b = 20;		// 父类中的b到了子类中 是private
		// c = 30;	// 父类中私有的c在子类中不能访问
	}
};



int main() {

	Son1 s;
	s.a = 10;	// Son1中的a是public，所以在类外可以访问。
	/*s.b = 20;
	s.c = 30;*/

	Son2 s2;
	// s2.a = 10; // a，b在子类中是protected访问控制，所以类外访问不了

	Son3 s3;
	// s3.a = 20;	// a，b在子类中是private访问控制，所以类外访问不了


	return 0;
}