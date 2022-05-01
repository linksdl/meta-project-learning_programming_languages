#pragma once

class Cube {

private:
	int m_Length;	// 长
	int m_Width;	// 宽
	int m_Height;	// 高

public:
	void setLength(int length);
	int getLength();

	void setWidth(int width);
	int getWidth();

	void setHeight(int height);
	int getHeight();

	// 获取面积的方法
	int getArea();

	// 获取体积的方法
	int getVolume();

	bool cubCompare(Cube & c);

};