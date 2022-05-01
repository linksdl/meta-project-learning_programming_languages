#include <iostream>
using namespace std;

class MyInt {
	friend ostream& operator<<(ostream& out, MyInt m);

public:
	MyInt() {
		num = 0;
	}

	// 前置++
	MyInt& operator++() {
		// 先++
		num++;

		// 返回自身
		return *this;
	}

	// 后置++
	MyInt operator++(int) {	
		// 先记录原来的值
		MyInt temp = *this;
		num++;
		return temp;
	}

private:
	int num;
};

ostream& operator<<(ostream& out, MyInt m) {
	out << m.num;
	return out;
}


// 递增运算符重载		++
int main() {

	MyInt m;
	//cout << ++(++m) << endl; // 1	
	//cout << m << endl;	// 1	

	cout << m++ << endl;	// 0
	cout << m << endl;		// 1

	//int a = 0;
	//cout << a++ << endl;	// 0
	//cout << a << endl;		// 1
	//cout << ++a << endl;	// 2
	//cout << a << endl;		// 2

	return 0;
}