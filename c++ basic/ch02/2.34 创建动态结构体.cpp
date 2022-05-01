#include <iostream>
#include <string>
using namespace std;

// 定义一个结构体
struct student {
	string name;	// 姓名
	int age;		// 年龄
	double height;	// 身高
};

// 创建动态结构体，并访问动态结构体中的成员的数据
/*
	如何选择 点号运算符（.）和箭头运算符(->)
	如果标识符是一个结构体变量名，那么应该使用点号运算符
	如果标识符是一个指针类型的变量，那么应该使用箭头运算符
*/
int main() {

	/*student stu = { "tom", 20, 178.5 };
	student* p_stu = &stu;*/

	student * p_stu = new student;
	// 1.访问方式一
	(*p_stu).name = "hello";
	(*p_stu).age = 18;
	(*p_stu).height = 178.5;

	cout << (*p_stu).name << "\t" << (*p_stu).age << "\t" << (*p_stu).height << endl;

	// 2.访问方式二  ->
	p_stu->name = "kitty";
	p_stu->age = 20;
	p_stu->height = 180.0;

	cout << p_stu->name << "\t" << p_stu->age << "\t" << p_stu->height << endl;
	return 0;
}