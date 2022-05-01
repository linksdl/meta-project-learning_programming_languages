#include <iostream>
using namespace std;

// 定义函数
void changeNumValue(int num) {
	num = 1000;
}

void changeNumValue1(int * p) {
	*p = 1000;
}

// 指针变量作为函数参数的问题
int main() {

	// 普通变量作为函数参数的问题
	// 需求：定义一个函数，给函数传递一个普通变量，在函数中修改普通变量的值。
	int num = 10;

	// changeNumValue(num);
//    changeNumValue(num)  // 不能修改参数的值
	changeNumValue1(&num);

	cout << "num = " << num << endl;


	return 0;
}
// 总结：通过普通变量在函数内部修改普通变量的值，是不能修改的。
// 如果想要通过函数内部修改外部变量的值，需要传递外部变量的地址。
// 函数传递参数：单向传递，传值。
