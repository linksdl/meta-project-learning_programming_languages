#include <iostream>
#include <string>
using namespace std;

class MyPrint {
public:

	// 重载()运算符
	void operator()(string text) {
		cout << text << endl;
	}

};

class MyAdd {
public:
	// 仿函数非常灵活，没有固定的写法
	int operator()(int a, int b) {
		return a + b;
	}
};

int getSum(int a, int b) {
	return a + b;
}

// 函数调用运算符重载		()  函数名(实参列表);
int main() {
	
	// 创建MyPrint对象
	MyPrint mp;
	mp("hello world !");	// mp.operator()("hello world !");
	// 仿函数，本质上是对象，而不是函数。这样的对象我们也称之为函数对象。

	MyAdd add;
	int sum = add(1, 2);
	cout << sum << endl;

	int sum1 = getSum(1, 2);


	return 0;
}