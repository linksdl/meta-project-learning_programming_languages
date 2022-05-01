#include <iostream>
using namespace std;

// 基类
class Base {
public:

	Base() {
		this->m_A = 10;
	}

	void func() {
		cout << "Base...func()" << endl;
	}

	void func(int a) {
		cout << "Base...func(int a)" << endl;
	}

	int m_A;
};

class Son :public Base {

public:

	Son() {
		this->m_A = 20;
	}

	void func() {
		cout << "Son...func()" << endl;
	}

	int m_A;

};

// 继承中的非静态同名成员处理
int main() {

	// 创建父类对象
	Base b;
	cout << b.m_A << endl;	// 10

	// 创建子类对象
	Son s;
	cout << s.m_A << endl;	// 20

	s.func();
	// 如果子类和父类出现同名的成员，那么通过子类对象去访问同名的成员，访问的是子类中的。

	// 通过子类对象访问父类中的同名的非静态成员，需要加上作用域
	cout << s.Base::m_A << endl;
	s.Base::func();

	// 如果子类中出现了和父类同名的成员函数，子类的成员函数会隐藏掉父类中所有同名的成员函数。
	// 子类重定义父类的成员函数，如果想要调用父类中同名的成员函数，必须加上作用域
	// s.func(10);
	s.Base::func(10);

	// func(double d){ d * 2 }  func(int i){ i * 3 }
	// s.func(2);

	return 0;
}