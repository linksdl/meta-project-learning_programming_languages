#include "Cube.h"

void Cube::setLength(int length) {
	m_Length = length;
}

int Cube::getLength() {
	return m_Length;
}

void Cube::setWidth(int width) {
	m_Width = width;
}

int Cube::getWidth() {
	return m_Width;
}

void Cube::setHeight(int height) {
	m_Height = height;
}

int Cube::getHeight() {
	return m_Height;
}

int Cube::getArea() {
	return (m_Length * m_Height + m_Length * m_Width + m_Height * m_Width) * 2;
}

int Cube::getVolume() {
	return m_Length * m_Height * m_Width;
}

bool Cube::cubCompare(Cube& c) {
	if (m_Length == c.m_Length && m_Width == c.m_Width && m_Height == c.m_Height){
		return true;
	}
	else {
		return false;
	}
}
