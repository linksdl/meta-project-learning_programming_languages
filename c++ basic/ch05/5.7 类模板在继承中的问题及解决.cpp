#include <iostream>
using namespace std;

template <class T>
class Base {
public:
	T m_A;
};

// 子类，子类以一个类模板作为父类时，必须明确父类的泛型的参数
class Son : public Base<int> {
};

template<class T>
class Base2 {		// Base2<double>
public:
	T m_A;
};

template<class T1, class T2>
class Son2 : public Base2<T2> {		// Son2<int,double>
public:

	Son2() { 
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}

	T1 m_B;
};


// 类模板在继承中的问题及解决方案
int main() {

	Son2<int, double> s;
	cout << "Base2的类型为：" << typeid(Base2<double>).name() << endl;
	cout << "Son2的类型为：" << typeid(Son2<int,double>).name() << endl;

	return 0;
}