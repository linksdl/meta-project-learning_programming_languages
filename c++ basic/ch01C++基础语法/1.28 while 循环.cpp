#include <iostream>

using namespace std;

/*
	初始化条件语句;
	while (判断条件语句) {
		循环体语句;
		控制条件语句;
	}

*/
int main() {

	// 案例1：在控制台输出10次"HelloWorld"
	/*int i = 1;
	while (i <= 10) {
		cout << "HelloWorld" << endl;
		i++;
	}*/


	// 案例2：请在控制台输出数据1-10
	/*int i = 1;
	while (i <= 10) {
		cout << i << "\t";
		i++;
	}*/


	// 案例3：求1-100之和
	//int i = 1;
	//// 定义累加变量
	//int sum = 0;
	//while (i <= 100) {
	//	sum += i;
	//	i++;
	//}
	//cout << "sum: " << sum << endl;


	// 案例4：统计"水仙花数"共有多少个
	int i = 100;
	int count = 0;

	while (i <= 999) {
		int ge = i % 10;
		int shi = i / 10 % 10;
		int bai = i / 10 / 10 % 10;

		int res = ge * ge * ge + shi * shi * shi + bai * bai * bai;
		if (res == i) {
			count++;
		}
		i++;
	}

	cout << "水仙花数的个数是： " << count << endl;


	return 0;
}