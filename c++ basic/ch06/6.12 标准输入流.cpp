#include <iostream>
using namespace std;
/*
	cin.get()			// 获取一个字符
	cin.get(一个参数)	// 读取一个字符
	cin.get(两个参数)	// 可以读取字符串
	cin.getline()		// 获取一行数据
	cin.ignore()		// 忽略
	cin.peek()			// 偷窥
	cin.putback()		// 放回
*/

// cin.get()			// 获取一个字符
void test01() {
	char ch = cin.get();
	cout << "ch = " << ch << endl;
	ch = cin.get();
	cout << "ch = " << ch << endl;
	ch = cin.get();
	cout << "ch = " << ch << endl;
	ch = cin.get();
	cout << "ch = " << ch << endl;

	/*char c;
	cin.get(c);*/
}

// cin.get(两个参数)	// 可以读取字符串
void test02() {

	char buf[1024] = { 0 };
	cin.get(buf, sizeof(buf));
	cout << buf << endl;
	// char ch = cin.get();
	/*if (ch == '\n') {
		cout << "换行符遗留在缓冲区中" << endl;
	}
	else {
		cout << "换行符未遗留在缓冲区中" << endl;
	}*/

	char buf1[1024] = { 0 };
	cin.get(buf1, sizeof(buf1));
	cout << buf1 << endl;
}

// cin.getline()		// 获取一行数据
void test03() {

	char buf[1024] = { 0 };
	cin.getline(buf, sizeof(buf));

	char ch = cin.get();
	if (ch == '\n') {
		cout << "换行符遗留在缓冲区中" << endl;
	}
	else {
		cout << "换行符未遗留在缓冲区中" << endl;
	}

	cout << "buf = " << buf << endl;

}

// cin.ignore()		// 忽略
void test04() {

	cin.ignore(3);	// 默认是忽略1个缓冲区中的字符
	char ch = cin.get();
	cout << "ch = " << ch << endl;

}

// cin.peek()			// 偷窥
void test05() {
	char ch = cin.peek();	// 查看缓冲区中的第一个字符，并不会取值
	cout << "ch = " << ch << endl;

	ch = cin.peek();	// 查看缓冲区中的第一个字符，并不会取走
	cout << "ch = " << ch << endl;

	ch = cin.get();
	cout << "ch = " << ch << endl;

	ch = cin.get();
	cout << "ch = " << ch << endl;
}

// cin.putback()		// 放回
void test06() {

	char ch = cin.get();
	cin.putback(ch);	// 将ch放回到缓冲区中，并且放回原位

	char buf[1024] = { 0 };
	cin.getline(buf, sizeof(buf));

	cout << "buf = " << buf << endl;

}

int main() {

	test06();


	return 0;
}