#include <iostream>
using namespace std;

// 表示两地路程时间的结构体
struct s_time {
	int hours;	// 小时
	int mins;	// 分钟
};

// 计算两个时间的和
const s_time & sum(s_time& total, const s_time& t1, const s_time& t2) {
	total.mins = (t1.mins + t2.mins) % 60;
	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / 60;
	return total;
}

// 显示时间
void show_time(const s_time& t) { 
	cout << t.hours << " 小时， " << t.mins << " 分钟" << endl;
}

int getSum(int a, int b) {
	return a + b;
}

int& func() {
	static int a = 10;
	return a;
}

// 引用作为函数返回值
/*
	引用作为函数返回值的注意事项：不要返回局部变量的引用。避免返回函数结束时不再存在的内存单元的引用。
*/
int main() {

	s_time t1 = { 2, 40 };
	s_time t2 = { 1, 50 };
	/*s_time ret = sum(ret, t1, t2);
	show_time(ret);*/
	s_time ret;

	// sum(ret, t1, t2) = t2;
	// sum(ret, t1, t2);   ret = t2;
	// 赋值运算符左边必须是可以修改的左值。

	// getSum(1, 2) = 10;

	int & ref = func();
	cout << ref << endl;
	cout << ref << endl;
	cout << ref << endl;
	cout << ref << endl;

	return 0;
}