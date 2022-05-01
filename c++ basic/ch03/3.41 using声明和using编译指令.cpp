#include <iostream>
using namespace std;	// 表示可用使用std这个名称空间下的所有的名称。

/*
	using声明 和 using编译指令: 简化对名称空间中名称的使用。
	using声明：使特定的标识符可用。
	using编译指令：让整个名称空间中的名称可用。

	using声明：如果局部变量和using声明同时使用会出现问题。
	using编译指令，如果出现同名的变量，不会报错。使用就近原则。
*/

// 定义一个名称空间fun
namespace fun {
	int num = 1;
	double d = 1.99;
}

namespace fun1 {
	int num = 1;
	double d = 1.99;
}


int main() {

	/*cout << fun::num << endl;
	cout << fun::d << endl;*/

	// int num = 2;

	// using 声明
	/*using fun::num;
	cout << num << endl;*/

	// using 编译指令
	using namespace fun;	// 让fun下面的名称都可用
	using namespace fun1;
	cout << fun::num << endl;

	return 0;
}


