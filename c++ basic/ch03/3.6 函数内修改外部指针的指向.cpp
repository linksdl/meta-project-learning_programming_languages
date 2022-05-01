#include <iostream>
using namespace std;

// 函数的内部修改外部指针变量的指向。（函数的内部修改外部变量的值）
// 如果需要在函数内部修改外部指针变量的值，需要传递外部指针变量的地址值。
void myNewInt(int* ptr) {
	ptr = new int;
}

void myNewInt1(int ** ptr) {
	
	// ptr == &p  ->  *ptr == *&p  == p
	*ptr = new int;

}

int main() {

	// 定义一个指针变量
	int* p = nullptr;
	// 需求：定义一个函数，给 p 合法的指向。
	// myNewInt(p);

	myNewInt1(&p); // 指针变量的地址

	*p = 1000;
	cout << *p << endl;

	return 0;
}