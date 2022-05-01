#include <iostream>
using namespace std;


//void test() throw(){
//}
//
//void test() throw(int) {
//}
//
//void test() throw(int,double) {
//}
//
//void test() noexcept {
//}

class myException {
public:
	void printError() {
		cout << "我自己的异常" << endl;
	}
};

int myDivide(int a, int b) {
	if (b == 0) {
		// 通过throw抛出异常
		// throw 10;
		// throw 3.14;
		// throw string("aaaa");
		// throw myException();
		throw 'a';
	}
	return a / b;
}

// 异常的语法
int main() {

	int a = 10;
	int b = 0;

	// 把可能会产生异常的代码放到try块中
	try {
		int ret = myDivide(a, b);
	}
	catch (int num) {
		// 当捕捉到相应的异常后，进行的处理代码
		cout << "int类型异常捕获, num = " << num << endl;
	}
	catch (double num) {
		cout << "double类型异常捕获, num = " << num << endl;
	}
	catch (string str) {
		cout << "string类型异常捕获" << endl;
	}
	catch (myException e) {
		e.printError();
	}
	catch (...) {	// 其他类型的异常用...可以捕获
		cout << "其他异常捕获" << endl;
	}
	
	return 0;
}

/*
	总结：
	1.如果有异常可以通过throw操作创建一个异常对象并抛出
	2.将可能抛出异常的程序放到try代码块中
	3.如果在try代码块执行期间没有引起异常，catch代码块就不会执行
	4.catch子句会根据出现的先后顺序被检查，匹配的catch语句捕获并处理异常（或者继续抛出异常）
	5.如果陪陪的处理未找到，则会终止程序
	6.处理不了的异常，可以在catch的最后一个分支，使用 throw向上抛出
	7.C++异常处理使得异常的引发和异常的处理不必再一个函数中，这样底层的函数可以着重解决具体问题，而
	不必过多的考虑异常的处理。上层的调用者可以在适当的位置设置对不同类型异常的处理。
*/