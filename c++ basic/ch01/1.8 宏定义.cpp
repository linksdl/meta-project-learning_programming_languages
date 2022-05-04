#include <iostream>
#include <climits>

#define PI 3.14 // 符号常量，预编译阶段 进行符号替换

#define M(a,b) a*b

//#define M(a,b) a+b

using namespace std;

int main() {

	cout << INT_MAX << endl;

	cout << PI << endl;

	int i = M(2, 3);
	cout << i << endl;

	int num = M(3 + 4, 5 + 6);	// 3 + 4*5 + 6
	cout << num << endl;

	return 0;
}