#include <iostream>
using namespace std;

// 异常的基类
class BaseException {
public:
	virtual void printError() {

	}
};

// 空指针异常
class NullPointerException : public BaseException {
public:
	virtual void printError() {
		cout << "空指针异常！" << endl;
	}
};

// 越界异常
class OutOfRangeException : public BaseException {
public:
	virtual void printError() {
		cout << "越界异常！" << endl;
	}
};


void doWork() {

	// ....
	// throw NullPointerException();
	throw OutOfRangeException();
}


// 异常的多态使用
int main() {

	try {
		doWork();
	}
	/*catch (NullPointerException& e) {
		e.printError();
	}
	catch (OutOfRangeException& e) {
		e.printError();
	}*/
	catch (BaseException& e) {
		cout << "BaseException" << endl;
		e.printError();
	}


	return 0;
}