#include <iostream>
#include <string>
using namespace std;

/*
	友元的注意事项：
		1.友元关系不能被继承
		2.友元关系是单向的，类A是类B的朋友，但是类B不一定是类A的朋友
		3.友元关系不具有传递性。类B是类A的朋友，类C是类B的朋友，但是类C
		不一定是类A的朋友。
*/
class Building;
// 好朋友类
class GoodFriend {

public:
	void visit(Building& building);
	void visit1(Building& building);
};

// 友元成员函数
class Building {

	friend void GoodFriend::visit(Building& building);

	// friend class GoodFriend;
public:
	string m_SittingRoom;	// 客厅

	Building();

private:
	string m_BedRoom;	// 卧室
};

Building::Building() {
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

void GoodFriend::visit(Building& building) {
	cout << "正在访问：" << building.m_SittingRoom << endl;
	cout << "正在访问：" << building.m_BedRoom << endl;
}

void GoodFriend::visit1(Building& building) {
	cout << "正在访问：" << building.m_SittingRoom << endl;
	// cout << "正在访问：" << building.m_BedRoom << endl;
}

int main() {

	Building building;
	GoodFriend gf;
	gf.visit(building);



	return 0;
}