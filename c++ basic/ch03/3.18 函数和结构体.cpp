#include <iostream>
using namespace std;

/*
	总结：使用结构体编程的时候，可以把结构体当做普通的变量处理。
	缺点：结构体变量作为参数传递的时候，如果结构体数据太大，会占用大量的内存。
*/

// 定义一个时间结构体
struct s_time {
	int hours;	// 小时	
	int mins;	// 分钟
};

// 函数和结构体
// 需求：  A - B 2小时50分钟   B - A 1小时30分钟。
s_time sum(s_time t1, s_time t2) {

	// 定义一个和的结构体变量
	s_time total;
	total.mins = (t1.mins + t2.mins) % 60;
	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / 60;

	return total;
}

// 显示时间的函数
void show_time(s_time t) {
	cout << t.hours << " 小时, " << t.mins << " 分钟。" << endl;
}

int main() {

	// 创建两个结构体变量
	s_time t1 = { 2, 50 };
	s_time t2 = { 1, 30 };

	// 计算总共的路程的时间和
	s_time total = sum(t1, t2);

	show_time(total);

	return 0;
}