#include <iostream>
using namespace std;


/*
	1.一元运算符（一个运算数），二元运算符（两个运算数）
	  ++ -- a++ ++a			t1 + t2
	
	2.成员运算符函数
		一元是没有参数的
		二元是有一个参数
		operator+(Time & t);
		t1 + t2;	t1.operator+(t2);

	3.全局运算符函数
		一元是有一个参数
		二元是有两个参数
		operator+(Time & t1, Time & t2);
		t1 + t2		// operator+(t1, t2)

	4.运算符重载必须是有效的C++运算符，不能虚构一个新的符号。 比如 @

	5.不能违反运算符原来的句法和含义。  a + b  t1 + t2

	6.不能重载下面的运算符：
		sizeof
		. 成员运算符   p.age;
		成员指针运算符
		:: 作用域解析运算符
		?: 条件运算符

	7.只能通过成员函数重载的运算符:
		= （） []  ->
		<< 和 >> 只能通过全局函数配合友元函数进行重载。
		cout << p 
		不要重载&& 和 || 运算符，因为无法实现短路的规则。
*/

class Complex {
public:
	Complex(int flag) {
		this->flag = flag;
	}
	Complex& operator+=(Complex& complex) {
		this->flag = this->flag + complex.flag;
		return *this;
	}
	bool operator&&(Complex& complex) {
		return this->flag && complex.flag;
	}
public:
	int flag;
};

int main() {
	Complex complex1(0);  //flag 0 
	Complex complex2(1);  //flag 1

	// 原来的情况，从左往右运算，左边为假，则退出运算，结果为假。


	// 而现在是这样的，
	// complex1.operator&&(complex1 += complex2)
	// complex1.operator&&(complex1.operator+=(complex2));
	if (complex1 && (complex1 += complex2)) {
		cout << "真!" << endl;
	}
	else {
		cout << "假!" << endl;
	}
	return 0;
}