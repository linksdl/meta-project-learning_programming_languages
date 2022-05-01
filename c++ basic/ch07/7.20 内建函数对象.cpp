#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

// template<class T> T negate<T>//取反仿函数
void test01() {
	negate<int> n;
	cout << n(10) << endl;
}

// template<class T> T plus<T>//加法仿函数
void test02() {
	plus<int> p;
	cout << p(1, 1) << endl;
}

void myPrint(int val) {
	cout << val << endl;
}

class MyPrint {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

class MyCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

// template<class T> bool greater<T>//大于
void test03() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// for_each(v.begin(), v.end(), myPrint);
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	// 降序
	// sort(v.begin(), v.end(), MyCompare());
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), MyPrint());
}

// template<class T> bool logical_not<T>//逻辑非
void test04() {

	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	vector<bool> v2;
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
		cout << *it << endl;
	}


}


// 内建函数对象
int main() {

	test04();

	return 0;
}