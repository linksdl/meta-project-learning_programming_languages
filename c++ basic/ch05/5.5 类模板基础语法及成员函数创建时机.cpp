#include <iostream>
#include <string>
using namespace std;

// 模板中，可以使用默认参数
template<class NAMETYPE, class AGETYPE = int>
class Person {
public:

	Person(NAMETYPE name, AGETYPE age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson() {
		cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
	}

	NAMETYPE m_Name;
	AGETYPE m_Age;
};

// 类模板中的成员函数并不是一开始创建，而是在使用的时候才生成,在替换T后生成
template<class T>
class testClass {
public:
	void func1() {
		obj.show1();
	}

	void func2() {
		obj.show2();
	}

	T obj;
};

class Person1 {
public:
	void show1() {
		cout << "show1()" << endl;
	}
};

class Person2 {
public:
	void show2() {
		cout << "show2()" << endl;
	}
};

// 类模板的基础语法及类模板中成员函数的创建时机
int main() {

	//Person<string, int> p1("Tom", 20);	// 使用类模板不能自动类型推导，只能显示指定类型
	//p1.showPerson();

	//Person<string> p2("Jerry", 30);
	//p2.showPerson();

	testClass<Person2> tc;
	tc.func1();


	return 0;
}