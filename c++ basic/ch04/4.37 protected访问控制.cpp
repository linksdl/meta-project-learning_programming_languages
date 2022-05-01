#include <iostream>
using namespace std;

// protected访问控制
/*
	访问控制一共有3个：
		1.public:	 公共的访问控制，被修饰的成员在类和类外都能够被访问
		2.private:	 私有的访问控制，被修饰的成员只能在本类中访问，在类外不能够被访问
		3.protected: 受保护的访问控制，如果没有继承关系，和private的特点一样。

	在继承关系中，父类中protected修饰的成员，子类中可以直接访问，但是在类外的其他地方不能访问。
	
	成员变量一般使用私有访问控制，不要使用受保护的访问控制。
	成员方法如果想要让子类访问，但是不想让外界访问，可以使用受保护的访问控制。
	
*/

class Fu {
public:
	int num1;
protected:
	int num2;
private:
	int num3;

	void func() {
		num1 = 10;
		num2 = 20;
		num3 = 30;
	}
};

class Zi : public Fu {

public:
	void fun() {
		num1 = 10;
		num2 = 20;
		// num3 = 30;
	}

};

int main() {

	// 创建一个Fu对象
	Fu f;
	f.num1 = 10;
	/*f.num2 = 20;
	f.num3 = 30;*/

	Zi zi;
	zi.num1 = 10;



	return 0;
}