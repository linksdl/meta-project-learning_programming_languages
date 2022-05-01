#include <iostream>
using namespace std;

// 人类
class Person {
public:
	string name;	// 姓名
	int age;	// 年龄

	void eat() {
		cout << "吃饭" << endl;
	}

	void sleep() {
		cout << "睡觉" << endl;
	}
};

class Student1 : public Person {
public:
	void study() {
		cout << "学习" << endl;
	}
};

class Teacher1 : public Person {
public:
	void teach() {
		cout << "教学" << endl;
	}
};


// 学生类
class Student {
public:
	string name;	// 姓名
	int age;	// 年龄

	void eat() {
		cout << "吃饭" << endl;
	}

	void sleep() {
		cout << "睡觉" << endl;
	}

	void study() {
		cout << "学习" << endl;
	}
};

// 老师类
class Teacher {
public:
	string name;	// 姓名
	int age;	// 年龄

	void eat() {
		cout << "吃饭" << endl;
	}

	void sleep() {
		cout << "睡觉" << endl;
	}

	void teach() {
		cout << "教学" << endl;
	}
};

// 继承，是面向对象的一大特征。
/*
	多个类中存在相同的属性和行为时，将这些内容抽取到一个单独的类中，
	那么多个类无需再定义这些属性和行为，只要继承那个类即可。

	继承的格式：
	class 子类 : 继承方式 父类 {
	};

	父类：超类，基类
	子类：被称为派生类

	继承的好处：
		1.提高了代码的复用性
		2.提高了代码的维护性
		3.让类和类之间产生了关系，是多态的前提

	继承的弊端：
		类的耦合性增加了。
		开发的原则：高内聚，低耦合
		耦合：类和类的关系
		内聚：自己完成一件事情的能力

*/
int main() {

	// 创建一个学生对象
	Student1 stu;
	stu.name = "zs";
	stu.age = 20;
	cout << "name : " << stu.name << " age : " << stu.age << endl;
	stu.eat();
	stu.sleep();
	stu.study();


	return 0;
}