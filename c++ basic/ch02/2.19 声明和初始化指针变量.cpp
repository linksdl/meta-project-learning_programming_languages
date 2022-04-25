#include <iostream>
using namespace std;

// 声明以及初始化指针变量
int main() {

	// 声明指针变量
	char* ch_ptr;
	short* s_ptr;
	int* i_ptr;
	double* d_ptr;

    // 32位系统 指针占4个字节，64位 8个字节
	cout << sizeof(ch_ptr) << endl;
	cout << sizeof(s_ptr) << endl;
	cout << sizeof(i_ptr) << endl;
	cout << sizeof(d_ptr) << endl;

	// 指针变量的初始化
	int num = 50;
	int* p = &num;

	cout << p << endl;
	cout << &num << endl;


    double d = 2.0;
    double* pt_d;
    pt_d = &d;

    cout << pt_d << endl;
    cout << &d << endl;

	return 0;
}