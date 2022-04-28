#include <iostream>
using namespace std;

// 动物类
class Animal {

public:

	// 虚函数 （采用的就是动态联编）
	virtual void speak() {
		cout << "动物在说话" << endl;
	}

};

// 猫类
class Cat :public Animal {

public:
	void speak() {
		cout << "猫在说话" << endl;
	}

};


// 狗类
class Dog :public Animal {

public:
	void speak() {
		cout << "狗在说话" << endl;
	}

};

// C++中父类的指针或者引用 可以指向子类的对象，不会报错
void doSpeak(Animal& animal) {	// Animal & animal = c;
	
	/*
		调用了Animal中的speak()函数，属于地址早绑定，静态联编。
		因为在编译期间就知道了speak函数的地址，是动物的speak();

		但是，我们想要的结果是，如果传进来的是猫对象，就执行猫的speak();
		如果传进来的是狗对象，就执行狗的speak();
		这个就是地址晚绑定，动态联编。
	*/
	animal.speak();
}

// 静态联编和动态联编
int main() {

	Cat c;
	doSpeak(c);

	Dog d;
	doSpeak(d);

	// Animal& animal = c;

	return 0;
}