#include <iostream>

using namespace std;

// 演示if语句的第三种格式
int main() {
	/*
		键盘录入一个成绩，判断并输出成绩的等级。
		  90-100 优秀
		  80-89  良
		  70-79  中
		  60-69  及格
		  0-59   差
	*/

	// 1.获取键盘录入的成绩
	cout << "请输入您的分数：" << endl;
	int score;
	cin >> score;

	// 2.进行判断并输出结果(测试考虑整数的数据，错误的数据，临界值的数据)
	if (score > 100 || score < 0) {
		cout << "您输入的成绩有误" << endl;
	}
	else if (score >= 90 && score <= 100) {
		cout << "优秀" << endl;
	}
	else if (score >= 80 && score <= 89) {
		cout << "良" << endl;
	}
	else if (score >= 70 && score <= 79) {
		cout << "中" << endl;
	}
	else if (score >= 60 && score <= 69) {
		cout << "及格" << endl;
	}
	else {
		cout << "差" << endl;
	}
	
	


	



	return 0;
}