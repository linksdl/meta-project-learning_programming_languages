#include <iostream>
using namespace std;

// 基类
class Base {

public:

	// 编译时候就分配好了内存，类的所有对象都共享，类内声明，类外初始化
	static int m_A;

	static void func() {
		cout << "Base...func()" << endl;
	}

	static void func(int a) {
		cout << "Base...func(int a)" << endl;
	}

};

int Base::m_A = 10;	// 初始化静态成员变量

// 派生类
class Son :public Base {

public:

	static int m_A;

	static void func() {
		cout << "Son...func()" << endl;
	}

};
int Son::m_A = 20;


// 继承中的静态同名成员处理
int main() {

	// 创建子类对象
	Son s;
	cout << s.m_A << endl;

	// 访问父类中的静态的成员变量，需要加上作用域
	cout << "Base... m_A : " << s.Base::m_A << endl;
	cout << "Son...m_A : " << s.Son::m_A << endl;

	// 调用同名的静态的成员方法
	s.func();
	s.Son::func();
	s.Base::func();
	
	// 当子类重定义父类中的同名的func后，父类中的所有的同名func都会被隐藏。
	// 如果想要调用，必须加上作用域
	// s.func(10);
	s.Base::func(10);


	// 通过类名去访问静态的成员
	// 静态成员变量
	cout << Son::m_A << endl;
	cout << Base::m_A << endl;
	cout << Son::Base::m_A << endl;
	// 第一个Son表示访问Son的成员，Base表示作用域。

	// 静态的成员方法
	Son::func();
	Base::func();
	Son::Base::func();


	return 0;
}