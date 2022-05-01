#include <iostream>
using namespace std;

class MyException {
public:

	void printError() {
		cout << "打印错误" << endl;
	}

	MyException() {
		cout << "异常变量构造函数" << endl;
	}

	MyException(const MyException& e) {
		cout << "拷贝构造" << endl;
	}

	~MyException() {
		cout << "异常变量析构函数" << endl;
	}
};

void doWork() {
	// throw MyException();
	// throw &MyException();
	throw new MyException();
}

void test03() {
	try {
		doWork();
	}
	catch (MyException* e) {
		e->printError();
		cout << "捕获异常" << endl;
		delete e;
	}

}

void test02() {
	try {
		doWork();
	}
	catch (MyException& e) {
		cout << "捕获异常" << endl;
	}

}

void test01() {
	try {
		doWork();
	}
	catch (MyException e) {
		cout << "捕获异常" << endl;
	}
	
}




// 异常变量的声明周期
int main() {

	// test01();
	// test02();
	test03();

	return 0;
}