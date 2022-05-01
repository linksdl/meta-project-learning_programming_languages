#include <iostream>
#include <string>
using namespace std;

// 友元
/*
	友元有三种
		1.友元（全局）函数
		2.友元类
		3.友元成员函数
*/

// 家
class Building {

	// 让全局函数visit作为本类Building的好朋友，就可以访问私有成员。
	friend void visit(Building& building);

public:
	string m_SittingRoom;	// 客厅

	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

private:
	string m_BedRoom;	// 卧室

};

void visit(Building& building) {
	cout << "正在访问：" << building.m_SittingRoom << endl;
	cout << "正在访问：" << building.m_BedRoom << endl;
}


int main() {

	// 创建一个Building对象
	Building building;

	// cout << "正在访问：" << building.m_SittingRoom << endl;
	// cout << "正在访问：" << building.m_BedRoom << endl;
	visit(building);


	return 0;
}