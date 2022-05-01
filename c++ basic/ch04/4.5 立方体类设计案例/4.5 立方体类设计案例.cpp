#include <iostream>
#include "Cube.h"
using namespace std;

/*
	设计立方体类(Cube)，求出立方体的面积和体积，
	分别用全局函数和成员函数判断两个立方体是否相等。

	立方体类：
		成员变量：长(length) 宽(widht) 高(height)
		成员方法：获取面积的方法(getArea) 获取体积的方法(getVolume) 私有成员的公共方法方法 判断两个立方体是否相等的方法
*/

bool cubCompare(Cube& c1, Cube& c2) {
	if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	// 创建立方体对象
	Cube c1;

	c1.setLength(10);
	c1.setWidth(10);
	c1.setHeight(5);

	cout << "面积： " << c1.getArea() << endl;
	cout << "体积： " << c1.getVolume() << endl;

	Cube c2;
	c2.setLength(10);
	c2.setWidth(10);
	c2.setHeight(5);

	bool flag = c1.cubCompare(c2);
	cout << flag << endl;

	flag = cubCompare(c1, c2);
	cout << flag << endl;

	return 0;
}