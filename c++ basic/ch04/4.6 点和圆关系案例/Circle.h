#pragma once
#include "Point.h"

// Ô²Àà
class Circle {

private:
	Point m_Center;	// Ô²ÐÄ
	int m_Radius;	// °ë¾¶

public:
	void setCenter(int x, int y);
	void setRadius(int radius);

	void isPointInCircle(Point& point);

};

