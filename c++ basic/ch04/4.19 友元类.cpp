#include <iostream>
#include <string>
using namespace std;

/*
	友元的作用：在类外访问一个类的私有成员。
	友元有三种：
		1.友元（全局）函数 friend
		2.友元类
		3.友元成员函数
*/

class Building;

// 好朋友类
class GoodFriend {
public:
	void visit(Building& building);
};

class Building {

	// 告诉编译器GoodFriend类是我的好朋友，可以访问我当中的私有成员。
	friend class GoodFriend;	// 友元类

public:
	string m_SittingRoom;	// 客厅

	Building();

private:
	string m_BedRoom;	// 卧室
};

Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

void GoodFriend::visit(Building& building) {
	cout << "正在访问：" << building.m_SittingRoom << endl;
	cout << "正在访问：" << building.m_BedRoom << endl;
}


int main() {

	Building building;

	GoodFriend gf;
	gf.visit(building);



	return 0;
}