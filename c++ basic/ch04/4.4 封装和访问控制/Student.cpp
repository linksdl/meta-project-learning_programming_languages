#include "Student.h"
#include <iostream>

using namespace std;

// 吃饭的方法
void Student::eat() {
	cout << "吃饭" << endl;
}

// 睡觉的方法
void Student::sleep() {
	cout << "睡觉" << endl;
}

// 学习的方法
void Student::study() {
	cout << "学习" << endl;
}

void Student::setName(string name) {
	m_Name = name;
}

string Student::getName() {
	return m_Name;
}

void Student::setAge(int age) {
	m_Age = age;
}

int Student::getAge() {
	return m_Age;
}

void Student::setId(int id) {
	m_Id = id;
}

int Student::getId() {
	return m_Id;
}
