#include <iostream>
#include "Student.h"

using namespace std;

// 编写一个学生类，创建学生对象，使用学生对象
/*
	学生事物：
		属性：姓名，年龄，学号...
		行为：吃饭，睡觉，学习...

	学生类：
		成员变量：姓名，年龄，学号...
		成员方法：吃饭，睡觉，学习...

	定义类一般有两部分：
		1.类声明：成员变量，成员方法			放到头文件中
		2.类方法定义：成员方法的具体的实现		放到源代码文件中
*/
int main() {

	// 创建学生对象
	Student s1;

	// 使用学生对象	.称之为成员运算符
	s1.m_Name = "zs";
	s1.m_Age = 20;
	s1.m_Id = 1001;

	cout << s1.m_Name << "\t" << s1.m_Age << "\t" << s1.m_Id << endl;

	// 调用对象的方法
	s1.sleep();
	s1.eat();
	s1.study();

	// 动态创建
	Student * p_stu = new Student;

	return 0;
}