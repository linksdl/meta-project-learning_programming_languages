#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

/*
	adjacent_find算法 查找相邻重复元素
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
	@param  _callback 回调函数或者谓词(返回bool类型的函数对象)
	@return 返回相邻元素的第一个位置的迭代器
*/
// adjacent_find(iterator beg, iterator end, _callback);

void test01() {

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);

	vector<int>::iterator ret = adjacent_find(v.begin(), v.end());
	if (ret != v.end()) {
		cout << "找到了相邻的重复元素：" << *ret << endl;
	}
	else {
		cout << "未找到" << endl;
	}

}

/*
	binary_search算法 二分查找法
	注意: 在无序序列中不可用
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
	@param value 查找的元素
	@return bool 查找返回true 否则false
*/
// bool binary_search(iterator beg, iterator end, value);
void test02() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// v.push_back(3);

	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret) {
		cout << "找到了" << endl;
	}
	else {
		cout << "未找到" << endl;
	}
}

/*
	count算法 统计元素出现次数
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
	@param  value回调函数或者谓词(返回bool类型的函数对象)
	@return int返回元素个数
*/
//count(iterator beg, iterator end, value);
/*
count_if算法 统计元素出现次数
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
	@param  callback 回调函数或者谓词(返回bool类型的函数对象)
	@return int返回元素个数
*/
//count_if(iterator beg, iterator end, _callback);

void test03() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);

	int num = count(v.begin(), v.end(), 5);
	cout << "5元素的个数为：" << num << endl;
}

class GreaterFive {
public:
	bool operator()(int val) {
		return val >= 5;
	}
};

void test04() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	// 0 1 2 3 4 5 6 7 8 9 5 5 5 5

	int num = count_if(v.begin(), v.end(), GreaterFive());
	cout << "大于等于5的元素的个数为：" << num << endl;
}


// 常用的查找算法
int main() {

	test04();

	return 0;
}