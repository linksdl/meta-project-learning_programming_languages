#pragma once
#include <string>

using namespace std;

class Student {


private:
	string m_Name;	// 姓名
	int m_Age;		// 年龄
	int m_Id;		// 学号

public:
	// 吃饭的方法
	void eat();

	// 睡觉的方法
	void sleep();

	// 学习的方法
	void study();

	void setName(string name);

	string getName();

	void setAge(int age);

	int getAge();

	void setId(int id);

	int getId();

};