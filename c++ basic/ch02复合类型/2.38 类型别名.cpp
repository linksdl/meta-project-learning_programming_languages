#include <iostream>
#include <ctime>
using namespace std;
#define BYTE char

typedef int myint;

// 类型别名
int main() {

	//BYTE ch = 'A';
	//cout << ch << endl;

	//// 使用typedef
	//myint num = 10;
	//cout << num << endl;

	// 需求：让程序等待一段时间。
	// 解决：可以让系统时钟来完成这个工作。
	// C++ clock()  返回程序开始执行后所用的系统时间。

	// 问题：1.clock()返回的时间单位不一定秒，2.返回值可能是long，unsigned long
	// ctime   1.符号常量 CLOCKS_PER_SEC

	cout << "请输入延迟的时间秒数：" << endl;
	float secs;
	cin >> secs;

	clock_t delay = secs* CLOCKS_PER_SEC;

	cout << "开始...." << endl;

	clock_t start = clock();
	while (clock() - start < delay)
		;

	cout << "时间到了！！！" << endl;

	return 0;
}