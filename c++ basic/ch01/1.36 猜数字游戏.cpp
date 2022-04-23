#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
	猜数字的游戏[1-100]
*/
int main() {

	srand(time(0));	// 设置生成随机数的种子
	int guessNum = rand() % 100 + 1;	// [1,100]
	
	/*
		生成[m,n]随机数
		r = rand() % (n - m + 1) + m
	*/
	// cout << guessNum << endl;

	// 定义一个数表示剩余的猜测的次数
	int count = 6;

	while (count > 0) {

		count--;
		cout << "请您输入一个数字：" << endl;
		int inputNum;
		cin >> inputNum;

		// 判断
		if (inputNum == guessNum) {
			// 猜对了
			cout << "恭喜您，猜对了！" << endl;
			break;
		} else if(inputNum > guessNum){
			cout << "大了！还剩余 "<< count << " 次机会" << endl;
		} else  {
			cout << "小了！还剩余 " << count << " 次机会" << endl;
		}
	}


	return 0;
}