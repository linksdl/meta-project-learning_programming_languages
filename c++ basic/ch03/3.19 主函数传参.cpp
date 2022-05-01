#include <iostream>
using namespace std;

// 主函数传参（main函数传参）
/*
	main函数可以有参数，而且只能有2个参数。
	int main(int argc, char * argv[]);
	int main(int argc, char ** argv);

	int argc = argument count: 表示传递给main函数的参数的个数。
	char * argv[] = argument vector: 表示传递给main函数指针数组，用来接收所有的参数的。

	主函数的参数 argv[0] 表示程序的完整的路径。
*/
int main(int argc, char * argv[]) {

	cout << argc << endl;

	// 遍历字符串数组
	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}

	return 0;
}