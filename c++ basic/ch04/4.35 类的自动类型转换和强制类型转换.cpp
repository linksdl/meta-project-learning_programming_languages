#include <iostream>
using namespace std;

class MyString {
public:
	// 被explicit修饰的构造函数不能用于自动类型转换（隐式类型转换）
	explicit MyString(int len) {
		cout << "MyString有参构造MyString(int len)..." << endl;
	}

	MyString(const char* str) {
		cout << "MyString有参构造MyString(const char* str)..." << endl;
	}

	// 转换函数  转换成double
	operator double() {
		// 业务逻辑
		return 20.1;
	}

};

// 类的自动类型转换和强制类型转换
/*
	如果我们想让类对象转换成基本类型的数据，我们需要在类中添加转换函数
	1.转换函数必须是类方法
	2.转换函数不能指定返回类型
	3.转换函数不能有参数
*/
int main() {

	// 基本内置数据类型的自动类型转换和强制类型转换
	long count = 8;
	double time = 10;
	int size = 3.14;
	cout << count << endl;
	cout << time << endl;
	cout << size << endl;

	double num = 20.3;
	cout << num << endl;
	// 强制转换成int类型的数据
	int num1 = (int)num;
	int num2 = int(num);
	cout << num1 << endl;
	cout << num2 << endl;

	MyString str = "hello";	// MyString str = MyString("hello");

	// MyString str1 = 10;	// MyString str1 = MyString(10);
	MyString str1 = MyString(10);

	// 类的强制类型转换
	double d = str1;
	cout << d << endl;

	double d1 = double(str);
	double d2 = (double)str;
	cout << d1 << endl;
	cout << d2 << endl;

	return 0;
}