#include <iostream>
#include <string>
using namespace std;

// 手机类
class Phone {
public:
	string m_Pname;

	Phone() {
		cout << "Phone的无参构造" << endl;
	}

	Phone(string pname) {
		cout << "Phone的有参构造" << endl;
		m_Pname = pname;
	}

	~Phone() {
		cout << "Phone的析构函数" << endl;
	}

};

// 游戏类
class Game {
public:
	string m_Gname;

	Game() {
		cout << "Game的无参构造" << endl;
	}

	Game(string gname) {
		cout << "Game的有参构造" << endl;
		m_Gname = gname;
	}

	~Game() {
		cout << "Game的析构函数" << endl;
	}
};

class Person {
public:

	string m_Name;	// 姓名
	Game m_Game;	// 游戏
	Phone m_Phone;	// 手机

	Person() {
		cout << "Person的无参构造" << endl;
	}

	Person(string name, string pname, string gname) : m_Name(name), m_Phone(pname), m_Game(gname) {
		cout << "Person的有参构造" << endl;
	}

	~Person() {
		cout << "Person的析构函数" << endl;
	}

};

// 类对象作为类成员
/*
	当其他类对象作为本类中的成员：
		构造的顺序是：先调用其他类的构造，再调用本类的构造。
		析构的顺序是：和构造的顺序是相反的。
	
	成员的构造先后顺序是根据在类中的顺序决定的，跟构造方法中的初始化顺序无关。

*/
int main() {

	Person p1("zs", "iphone", "wzry");

	return 0;
}