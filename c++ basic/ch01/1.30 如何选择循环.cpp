#include <iostream>

using namespace std;


// 如何选择循环
int main() {

	// 使用三种循环分别循环3次
	/*for (int i = 0; i < 3; i++) {
		cout << i << endl;
	}*/
	// cout << i << endl;

	int i = 0; 
	while (i < 3) {
		cout << i << endl;
		i++;
	}
	cout << i << endl;

	int j = 0;
	do {
		cout << j << endl;
		j++;
	} while (j < 3);

	// 总结：
	/*
		1.想要使用初始化条件的变量，那么我们选择while或者do while。
		2.循环次数固定，可以使用for循环。
	*/
	
	return 0;
}