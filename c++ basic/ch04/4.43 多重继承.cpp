#include <iostream>
using namespace std;

// 多重继承（多继承）
/*
	一个类可以继承另外一个类，一个类也可以同时继承多个类，这就是多继承。
	类A, 继承了类B, 同时又继承了类C

	多继承的语法：
	class 子类 : 继承方式 父类1, 继承方式 父类2 ...
	注意事项：继承方式最好不要省略，如果省略，默认是私有继承。

	多继承是非常受争议的，从多个类继承可能会导致成员方法，成员变量同名产生较多的歧义。

*/

// 基类1
class Base1 {
public:

	Base1() {
		this->m_A = 10;
	}

	void func() {
		cout << "Base1 ... func()" << endl;
	}

	int m_A;
};

// 基类2
class Base2 {

public:

	Base2() {
		this->m_B = 20;
		this->m_A = 30;
	}

	void show() {
		cout << "Base2 ... show()" << endl;
	}

	int m_A;
	int m_B;

};


// 子类	多继承，Son继承了Base1和Base2
class Son :public Base1, public Base2 {

public :
	int m_C;
	int m_D;
};


int main() {

	// 创建子类对象
	Son s;
	// cout << "s.m_A : " << s.m_A << endl;
	cout << "s.m_B : " << s.m_B << endl;
	s.func();
	s.show();
	// 多继承，子类会继承多个父类中的成员（成员变量，成员方法）

	// 如果两个父类中出现了同名的成员，需要加上作用域进行区分
	cout << "Base1::m_A : " << s.Base1::m_A << endl;
	cout << "Base2::m_A : " << s.Base2::m_A << endl;
	cout << "Base2::m_B : " << s.m_B << endl;
	cout << "Base2::m_B : " << s.Base2::m_B << endl;

	cout << "Sizeof(Son) : " << sizeof(Son) << endl;

	return 0;
}