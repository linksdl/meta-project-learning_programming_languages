#include <iostream>
using namespace std;

// 单例设计模式
/*
	单例：单个实例（对象），创建一个对象，实例化一个对象，创建一个类的实例
	设计模式：程序员的经验总结
	单例设计模式：一个类在一个系统中（程序中）只能有一个对象。
	
	单例的好处：防止创建过多的对象，节省内存。
*/

// 主席类
class ChairMan {

private:
	// 1.私有化默认的构造函数
	ChairMan() {
	}

    // 拷贝构造函数私有化 实现单例模式
	ChairMan(const ChairMan& c) {

	}

	// 2.创建一个静态的实例，要私有
	static ChairMan* singleMan;

public:

	// 这种方式称之为饿汉式
	/*static ChairMan* getInstance() {
		return singleMan;
	}*/

	// 称为懒汉式
	static ChairMan* getInstance() {
		// return singleMan;
		if (singleMan == nullptr) {
			singleMan = new ChairMan;
		}
		return singleMan;
	}

};

// ChairMan* ChairMan::singleMan = new ChairMan;
ChairMan* ChairMan::singleMan = nullptr;

int main() {

	/*ChairMan c1;
	ChairMan c2;
	ChairMan c3;*/

	ChairMan* man = ChairMan::getInstance();
	ChairMan* man1 = ChairMan::getInstance();
	cout << (man == man1) << endl;

	/*ChairMan* man2 = new ChairMan(*man);
	cout << (man == man2) << endl;*/



	return 0;
}