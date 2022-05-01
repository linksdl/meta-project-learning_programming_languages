#include <iostream>
#include "Student.h"
using namespace std;

/*
	private防止程序直接访问成员数据，这个称之为数据隐藏。
	封装：隐藏对象的属性和实现细节，仅对外提供公共访问方式。

	封装的好处：
	1.隐藏实现细节，提供公共的访问方式
	2.提高了代码的复用性
	3.提高了安全性

	private 和 public protected 是访问控制修饰符
		private修饰的内容只能在本类中访问。
		public修饰的内容是公共的，谁都可用访问。
		protected表示受保护的权限，继承中用的比较多。子类能够访问父类中的内容
*/

// 封装和访问控制
int main() {

	// 创建学生对象
	Student s;

	// 对成员变量进行赋值
	/*s.m_Name = "zs";
	s.m_Age = -20;
	s.m_Id = 1001;*/

	s.setName("ls");
	s.setAge(20);
	s.setId(1002);

	cout << s.getName() << "\t" << s.getAge() << "\t" << s.getId() << endl;

	return 0;
}