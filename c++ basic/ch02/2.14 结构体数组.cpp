#include <iostream>
#include <string>
using namespace std;

struct student {
	string name;	// 姓名
	int age;		// 年龄
};

// 定义一个员工结构体
struct emp {
	string name;
	int age;
	double salary;
};

// 演示结构体数组
int main() {

	//// 创建学生结构体数组
	//student stus[2] = {
	//	{"tom", 18},
	//	{"kitty", 28}
	//};

	//// 输出元素的信息
	//cout << stus[0].name << "\t" << stus[0].age << endl;
	//cout << stus[1].name << "\t" << stus[1].age << endl;

	// 案例：定义一个结构体用于描述员工的信息（姓名、年龄、薪资）
	// 录入3个员工的信息，并打印3个员工的信息。

	emp emps[3];

	for (int i = 0; i < 3; i++) {

		cout << "请输入第 " << i + 1 << " 个员工的姓名：" << endl;
		string name;
		cin >> name;

		cout << "请输入第 " << i + 1 << " 个员工的年龄：" << endl;
		int age;
		cin >> age;

		cout << "请输入第 " << i + 1 << " 个员工的薪资：" << endl;
		double salary;
		cin >> salary;

		// 定义一个员工结构体变量
		emp employee = { name , age, salary};
		emps[i] = employee;
	}

	cout << "===============" << endl;

	// 输出3个员工的信息
	for (int i = 0; i < 3; i++) {
		emp employee = emps[i];
		cout << "姓名：" << employee.name << endl;
		cout << "年龄：" << employee.age << endl;
		cout << "薪资：" << employee.salary << endl;
		cout << "===============" << endl;
	}


	return 0;
}