#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

/*
	accumulate算法 计算容器元素累计总和
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
	@param value累加值
*/
// accumulate(iterator beg, iterator end, value)
/*
	fill算法 向容器中添加元素
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
	@param value t填充元素
*/
// fill(iterator beg, iterator end, value)

void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	int sum = accumulate(v.begin(), v.end(), 1000);
	cout << sum << endl;

}

void test02() {

	vector<int> v;
	v.resize(10);
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;

	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;
}


// 常用的算术生成算法
int main() {

	test02();

	return 0;
}