#include <iostream>
using namespace std;

// 定义一个时间类
class Time {
public:
	int hours;	// 小时
	int minutes;	// 分钟

	Time() {
		hours = 0;
		minutes = 0;
	}

	Time(int h, int m) {
		hours = h;
		minutes = m;
	}

	void addHour(int h) {
		hours += h;
	}

	void addMin(int m) {
		minutes += m;
		hours += minutes / 60;
		minutes = minutes % 60;
	}

	void reset(int h, int m) {
		hours = h;
		minutes = m;
	}

	Time sum(Time& t) {
		Time sum;
		sum.minutes = minutes + t.minutes;
		sum.hours = hours + t.hours + sum.minutes / 60;
		sum.minutes %= 60;
		return sum;
	}

	// 对+进行运算符重载
	/*Time operator+(Time& t) {
		Time sum;
		sum.minutes = minutes + t.minutes;
		sum.hours = hours + t.hours + sum.minutes / 60;
		sum.minutes %= 60;
		return sum;
	}*/

	void show() {
		cout << "hours : " << hours << " , minutes : " << minutes << endl;
	}
};

Time operator+(Time& t1, Time& t2) {
	Time sum;
	sum.minutes = t1.minutes + t2.minutes;
	sum.hours = t1.hours + t2.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

// 加号运算符重载
int main() {

	/*Time t1(2, 30);
	t1.show();
	t1.addHour(1);
	t1.addMin(40);
	t1.show();
	t1.reset(5, 50);
	t1.show();*/

	Time t1(2, 50);
	Time t2(4, 50);
	/*Time t3 = t1.sum(t2);
	t3.show();*/
	Time t3 = t1 + t2;
	t3.show();

	return 0;
}