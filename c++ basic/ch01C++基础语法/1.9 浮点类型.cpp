#include <iostream>

using namespace std;

int main() {

	// 声明几个浮点数
	// float 、double 、long double
	// 这几个浮点数字节大写不一样，精度也不一样。
	double d = 3.14;
	double d1 = 0.314E1;
	double d2 = 0.00000012;
    double d3 = 0.24E5

	cout << d << endl;
	cout << d1 << endl;

	cout << 3.14 << endl;	// 默认是double类型
	cout << 3.14f << endl;
	cout << 3.14F << endl;

	// float和double的精度问题
	float num = 10.0 / 3.0;
	double num1 = 10.0 / 3.0;

	cout << num << endl; // 3.33333
	cout << num1 << endl;  // 3.33333

	// cout默认打印小数只输出6个有效数字
	cout.precision(18);

	cout << num << endl;  // 3.3333325386047363
	cout << num1 << endl; // 3.3333333333333348

	return 0;
}