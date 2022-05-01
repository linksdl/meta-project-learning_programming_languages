#include <iostream>
using namespace std;

// 基类
class Base {
public:
	Base() {
		cout << "Base的构造函数" << endl;
	}
	~Base() {
		cout << "Base的析构函数" << endl;
	}
};

// 其他类
class Other {
public:
	Other() {
		cout << "Other的构造函数" << endl;
	}
	~Other() {
		cout << "Other的析构函数" << endl;
	}
};

// 派生类
class Son :public Base {
public:
	Son() {
		cout << "Son的构造函数" << endl;
	}
	~Son() {
		cout << "Son的析构函数" << endl;
	}
	Other other;
};

class Base1 {
public:

	Base1(int a) {
		this->m_A = a;
		cout << "Base1的有参构造函数" << endl;
	}

	~Base1() {
		cout << "Base1的析构函数" << endl;
	}

	int m_A;
};

class Son1 :public Base1 {

public:

	Son1() : Base1(10){
		cout << "Son1的构造函数" << endl;
	}

	Son1(int b) : Base1(b) {
		this->m_B = b;
		cout << "Son1的构造函数" << endl;
	}

	~Son1() {
		cout << "Son1的析构函数" << endl;
	}

	int m_B;
};


// 继承中的构造函数和析构函数
/*
	创建子类对象时，会先调用父类的构造函数，对父类的数据进行初始化；
	再调用数据成员的构造函数对数据成员进行初始化；
	然后调用子类的构造函数对子类数据进行初始化；
	析构的顺序和构造的顺序相反。

	子类的构造函数必须使用父类的构造函数对父类数据进行初始化。
	子类的构造函数会默认使用父类的默认构造函数对父类数据进行初始化。
	调用父类的构造函数是在调用子类构造函数之前，使用成员初始化列表语法完成。

*/
int main() {

	// 创建子类对象
	Son s;

	Son1 s1(20);
	cout << s1.m_A << endl;
	cout << s1.m_B << endl;

	return 0;
}