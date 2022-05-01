#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


/*
	遍历算法 遍历容器元素
	@param beg 开始迭代器
	@param end 结束迭代器
	@param _callback  函数回调或者函数对象
	@return 函数对象
*/
// for_each(iterator beg, iterator end, _callback);

void myPrint(int val) {
	cout << val << endl;
}

class MyPrint {
public:
	MyPrint() {
		m_count = 0;
	}
	void operator()(int val) {
		cout << val << endl;
		m_count++;
	}

	int m_count;
};

void test01() {
	
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// for_each(v.begin(), v.end(), myPrint);
	for_each(v.begin(), v.end(), MyPrint());

}

// for_each()有返回值
void test02() {
	
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	MyPrint mp = for_each(v.begin(), v.end(), MyPrint());
	cout << "mp 中 m_count的值为：" << mp.m_count << endl;
}

class MyPrint2 : public binary_function<int, int, void> {
public:
	void operator()(int val, int start) const {
		cout << val + start << endl;
	}
};

// for_each可以绑定参数
void test03() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), bind2nd(MyPrint2(), 1000));
}

/*
	transform算法 将指定容器区间元素搬运到另一容器中
	注意 : transform 不会给目标容器分配内存，所以需要我们提前分配好内存
	@param beg1 源容器开始迭代器
	@param end1 源容器结束迭代器
	@param beg2 目标容器开始迭代器
	@param _cakkback 回调函数或者函数对象
	@return 返回目标容器迭代器
*/
// transform(iterator beg1, iterator end1, iterator beg2, _callbakc)

class MyTransform {
public:
	int operator()(int val) {
		return val + 10;
	}
};

void test04() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int> vt;	// 目标容器

	// 提前分配好内存
	vt.resize(v.size());

	transform(v.begin(), v.end(), vt.begin(), MyTransform());

	for_each(vt.begin(), vt.end(), myPrint);
}


// 常用的遍历算法
int main() {

	test04();


	return 0;
}