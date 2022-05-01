#include <iostream>
using namespace std;

class Base {

};

class Other {

};


// 常量指针和非常量指针转换
void test01() {

	// 常量指针->非常量指针
	const int* p = nullptr;
	int *np = const_cast<int*>(p);

	// 非常量指针->常量指针
	int* pp = nullptr;
	const int * npp = const_cast<const int*>(pp);

	const int a = 10;
	// const_cast<int>(a);	// 不能对非指针或者非引用进行转换

}

// 常量引用和非常量引用转换
void test02() {

	int num = 10;
	int& ref_num = num;

	const int & refNum2 = const_cast<const int&>(ref_num);
	int& refNum3 = const_cast<int&>(refNum2);

}


// 重新解释转换 reinterpret_cast
void test03() {
	
	int a = 10;
	int * p = reinterpret_cast<int*>(a);
	// double ch = reinterpret_cast<double>(a);

	double* ch = reinterpret_cast<double*>(a);
	double ch = reinterpret_cast<double&>(a);

	Base* base = nullptr;
	Other* other = reinterpret_cast<Other*>(base);

}


// 常量转换const_cast和重新解释转换 reinterpret_cast
int main() {



	return 0;
}