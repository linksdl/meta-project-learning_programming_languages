#include <iostream>
using namespace std;

int getSum(int a, int b = 10);

void func(int a, int) {

}

// 默认参数：指的是当函数调用中省略了实参时自动使用的一个值。
// 给形式参数加上默认值，如果调用函数传入了值，就使用实参替换默认值，如果没有传入参数，会使用默认值。
// 默认参数的好处就是能够提高使用函数的灵活性。
/*
	默认参数的注意事项：
		1.如果某个参数有了默认值，那么从这个位置开始，后面的参数都必须有默认值。
		默认参数只能从右往左添加默认值。
		2.把默认参数放到函数原型中。
*/
// 占位参数：在函数形参中，只写数据类型，不写参数名，起到了占位的作用。
int main() {

	cout << getSum(10, 20) << endl;	// 30
	cout << getSum(10) << endl;		// 15 

	func(10, 20);

	return 0;
}

// 定义一个函数
int getSum(int a, int b) {
	return a + b;
}