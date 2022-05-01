#include <iostream>
#include "Point.h"
#include "Circle.h"

using namespace std;

/*
	设计一个圆形类（Circle）, 和一个点类（Point）,计算点和圆的关系。

	点类（Point）:
		成员变量：x轴坐标（m_X） y轴坐标（m_Y）
		成员方法：成员变量的公共访问方法

	圆类（Circle）:
		成员变量：圆心（Point m_Center） 半径（m_Radius）
		成员方法：成员变量的公共访问方法  判断点和圆关系的方法

	点和圆的关系：
		1.点在圆外
		2.点在圆上
		3.点在圆内
*/
int main() {

	// 创建一个点
	Point p;
	p.setX(6);
	p.setY(0);

	// 创建一个圆
	Circle c;
	c.setCenter(5, 0);
	c.setRadius(5);

	c.isPointInCircle(p);

	return 0;
}