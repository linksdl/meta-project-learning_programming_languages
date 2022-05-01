#include "Circle.h"
#include <iostream>

using namespace std;

void Circle::setCenter(int x, int y) {
	m_Center.setX(x);
	m_Center.setY(y);
}

void Circle::setRadius(int radius) {
	m_Radius = radius;
}

void Circle::isPointInCircle(Point& point) {

	// 计算点和圆心的距离
	int distance = (point.getX() - m_Center.getX()) * (point.getX() - m_Center.getX())
		+ (point.getY() - m_Center.getY()) * (point.getY() - m_Center.getY());

	int radius = m_Radius * m_Radius;

	if (distance < radius) {
		cout << "Point(" << point.getX() << " , " << point.getY() << ") 在圆内！" << endl;
	}
	else if (distance == radius) {
		cout << "Point(" << point.getX() << " , " << point.getY() << ") 在圆上！" << endl;
	}
	else {
		cout << "Point(" << point.getX() << " , " << point.getY() << ") 在圆外！" << endl;
	}
}
