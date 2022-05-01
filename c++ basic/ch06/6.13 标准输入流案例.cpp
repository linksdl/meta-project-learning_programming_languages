#include <iostream>
using namespace std;


// 案例1: 根据用户输入的内容，判断用户输入的是数字还是字符串  
void test1() {
	// 12345	abcde
	cout << "请输入一个字符串或者数字:" << endl;

	char ch = cin.peek();

	if (ch >= '0' && ch <= '9') {
		int num;
		cin >> num;
		cout << "您输入的是数字：" << num << endl;
	}
	else {
		char buf[1024];
		cin >> buf;
		cout << "您输入的是字符串：" << buf << endl;
	}

}

// 案例2 ：让用户输入 1 ~ 10 之间的数字，如果输入有误，重新输入
void test2() {
	
	int num;

	while (true) {
		cout << "请输入 1 ~ 10 之间的数字：" << endl;
		cin >> num;
		// cout << cin.fail() << endl;
		if (num >= 1 && num <= 10) {
			cout << "输入正确，输入的值为：" << num << endl;
			break;
		}

		// 重置标志位
		cin.clear();
		// 清空缓冲区	cin.getline()  cin.ignore();
		char buf[1024] = { 0 };
		cin.getline(buf, sizeof(buf));

	}

}

// 标准输入流案例
int main() {

	test2();

	return 0;
}