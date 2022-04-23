#include <iostream>

using namespace std;

// 演示for循环
/*
	for (初始化语句; 判断条件语句; 控制条件语句) {
		语句体;
	}
*/
int main() {

	// 1. 在控制台输出10次"HelloWorld"
	// cout << "HelloWorld" << endl;
	/*for (int i = 1; i <= 10; i++) {
		cout << "HelloWorld" << endl;
	}*/

	// 2. 在循环的时候，控制步长
	for (int i = 1; i <= 10; i += 2) {
		cout << "HelloWorld" << endl;
	}

	/*
		注意事项：初始化语句只会执行一次
	*/

	return 0;
}