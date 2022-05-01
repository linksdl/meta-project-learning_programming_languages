#include <iostream>
using namespace std;

// extern "C" 的用途：用于 C 和 C++ 做混合开发。
/*
	由于 C 和 C++ 编译规则的不同，在 C 和 C++ 混合开发的时候，可能会经常使用到 extern "C"。
*/

//extern "C" int add(int, int);	// int __cdecl add(int,int)" (?add@@YAHHH@Z)
//extern "C" int sub(int, int);
//extern "C" int divide(int, int);

extern "C" {
	#include "math.h"
}

int main() {
	
	/*
		平时我们在做开发的过程中，会使用到一些第三方的框架\库：可能使用C语言编写，而且是开源的。
		需求：模拟开发一个第三方的库：数学计算相关的库。
	*/

	// 使用数学计算库
	cout << add(10, 20) << endl;
	cout << sub(20, 10) << endl;

	return 0;
}