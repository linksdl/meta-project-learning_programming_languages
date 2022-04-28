#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class Animal {
public:

	Animal() {
		cout << "Animal 构造函数调用了" << endl;
	}

	virtual void speak() = 0;

	// 利用虚析构可以解决 不调用子类的析构函数的问题
	/*virtual ~Animal() {
		cout << "Animal 的析构函数调用了" << endl;
	}*/

	// 纯虚析构，需要有声明，也需要有实现
	// 纯虚析构需要在类外进行实现
	// 如果类中有了纯虚析构，那么这个类就是抽象类
	virtual ~Animal() = 0;
};

Animal::~Animal() {
	cout << "Animal 的析构函数调用了" << endl;
}



class Cat : public Animal {
public:

	Cat(const char* name) {
		cout << "Cat 的构造函数调用了" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}

	void speak() {
		cout << this->m_Name << "小猫在说话" << endl;
	}

	~Cat() {
		if (this->m_Name != nullptr) {
			cout << "Cat 的析构函数调用了" << endl;
			delete[] this->m_Name;
			this->m_Name = nullptr;
		}
	}

	char* m_Name;	// 姓名
};

// 虚析构和纯虚析构
int main() {

	Animal* cat = new Cat("Tom");
	cat->speak();

	delete cat;

	return 0;
}