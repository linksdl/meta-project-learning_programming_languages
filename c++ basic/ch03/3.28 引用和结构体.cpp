#include <iostream>
using namespace std;

// 定义一个表示两地路程时间的结构体
struct s_time {
	int hours;	// 小时
	int mins;	// 分钟
};

// 定义一个函数，计算两个时间的总和
s_time sum(const s_time & t1, const s_time & t2) {
	s_time total;
	total.mins = (t1.mins + t2.mins) % 60;
	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / 60;
	return total;
}

// 定义一个函数，用来显示时间信息
void show_time(const s_time & t) { // s_time & t = total;
	// t.hours = 10;
	cout << t.hours << " 小时， " << t.mins << " 分钟" << endl;
}

// 引用和结构体
int main() {

	// 创建一个结构体变量
	//s_time s = {3, 20};
	//// 创建结构体变量的引用
	//s_time& rs = s;
	//rs.hours = 5;
	//rs.mins = 30;
	//cout << s.hours << " : " << s.mins << endl;

	// 定义两个时间结构体变量
	s_time s1 = { 2, 40 };
	s_time s2 = { 1, 30 };
	s_time total = sum(s1, s2);
	show_time(total);
	
	return 0;
}
/*
	使用引用参数的两个主要的原因：
	1.能够修改函数外部的数据。
	2.通过传递引用而不是整个数据，没有了副本的拷贝，提高程序的运行速度。

	指导原则：
		1.对使用传递的值而不做修改的函数
			a.如果数据比较小，如内置的基本数据类型或者小型的结构体，按值传递。
			b.如果数据是数组，使用指针，指针声明为指向const的指针
			c.如果数据比较大，例如大型的结构体，使用const指针或者const引用。
			d.如果数据是类对象，使用const引用。
		2.对使用传递的值要做修改的函数
			a.如果是内置数据类型，使用指针。 fixit(&x) 
			b.如果数据是数组，只能使用指针。
			c.如果数据是结构，使用引用或者指针。
			d.如果数据是类对象，使用引用。

*/