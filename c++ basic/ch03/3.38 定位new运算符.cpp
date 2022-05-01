#include <iostream>
using namespace std;
#include <new>

/*
	动态存储持续性：动态内存是由new和delete运算符进行控制，而不是由作用域和链接性规则进行控制
	动态内存和自动内存不同，它不是LIFO。

	1.使用new运算符进行初始化
	2.new失败，返回空指针，引发一个异常  std::bad_alloc
	3.运算符new 和 new []分别调用如下的函数：
		void * operator new(std::size_t) 
		void * operator new[](std::size_t)
	运算符delete和delete []:
		void * operator delete(void *)
		void * operator delete[](void *)
	（运算符重载）

	int *pi = new int;	// int *pi = new(sizeof(int))

	4.定位new运算符  包含new 

*/
const int N = 4;
char buffer[512];

int main() {

	double * pd1 = new double[N];			// 使用堆内存
	double * pd2 = new (buffer) double[N];	// 使用的是buffer的内存

	for (int i = 0; i < N; i++) {
		pd2[i] = pd1[i] = i;
	}
	
	cout << pd1 << "\t" << (void *)buffer << endl;

	for (int i = 0; i < N; i++) {
		cout << pd1[i] << " 的地址：" << &pd1[i] << "; ";
		cout << pd2[i] << " 的地址：" << &pd2[i] << endl;
	}

	cout << "=======================" << endl;

	double* pd3 = new double[N];			
	double* pd4 = new (buffer) double[N];

	for (int i = 0; i < N; i++) {
		pd4[i] = pd3[i] = i * 2;
	}

	for (int i = 0; i < N; i++) {
		cout << pd3[i] << " 的地址：" << &pd3[i] << "; ";
		cout << pd4[i] << " 的地址：" << &pd4[i] << endl;
	}

	cout << "=======================" << endl;

	delete[] pd1;
	pd1 = new double[N];
	pd2 = new (buffer + N * sizeof(double)) double[N];

	for (int i = 0; i < N; i++) {
		pd2[i] = pd1[i] = i * 3;
	}

	for (int i = 0; i < N; i++) {
		cout << pd1[i] << " 的地址：" << &pd1[i] << "; ";
		cout << pd2[i] << " 的地址：" << &pd2[i] << endl;
	}

	delete[] pd1;
	delete[] pd3;

	// 动态创建一个int类型的数据
	/*int* pi = new int(6);
	cout << *pi << endl;
	double* pd = new double(9.99);*/
	// 数组和结构体数据，需要使用列表初始化进行初始化。


	return 0;
}