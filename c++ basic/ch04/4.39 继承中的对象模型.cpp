#include <iostream>
using namespace std;

// 基类
class Base {

public:
	int m_A;

	void func() {
		cout << "func..." << endl;
	}

protected:
	int m_B;

private:
	int m_C;	// m_C被子类继承了，但是由于编译器进行了保护，因此子类中无法访问。

};

// 派生类, 如果继承的时候没有写继承方式，那么默认使用私有继承
class Son : public Base {

public:
	int m_D;

};


// 继承中的对象模型
/*
	类中的成员方法和成员变量是分开存储的。在对象中，只保存了成员变量的信息。
	子类将父类中所有的成员都继承了过来，包括私有的。

	通过Visual Studio的工具可以查看一个类内存分布。
	1.打开这个工具
	2.切换到当前原文件的目录
	3. cl /d1 reportSingleClassLayout类名 文件名
*/
int main() {

	cout << "sizeof(Base) : " << sizeof(Base) << endl;	// 12
	cout << "sizeof(Son) : " << sizeof(Son) << endl;	// 16

	return 0;
}