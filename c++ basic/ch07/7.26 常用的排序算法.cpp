#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
using namespace std;


/*
	merge算法 容器元素合并，并存储到另一容器中
	注意:两个容器必须是有序的
	@param beg1 容器1开始迭代器
	@param end1 容器1结束迭代器
	@param beg2 容器2开始迭代器
	@param end2 容器2结束迭代器
	@param dest  目标容器开始迭代器
*/
// merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
void test01() {

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int> vt;	// 目标容器
	vt.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());

	// lambda表达式 [](){} 匿名函数
	for_each(vt.begin(), vt.end(), [](int val) {cout << val << " "; });

}

/*
	sort算法 容器元素排序
	@param beg 容器1开始迭代器
	@param end 容器1结束迭代器
	@param _callback 回调函数或者谓词(返回bool类型的函数对象)
*/
// sort(iterator beg, iterator end, _callback)
void test02() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	sort(v.begin(), v.end(), greater<int>());

	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });

}

/*
	random_shuffle算法 对指定范围内的元素随机调整次序
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
*/
// random_shuffle(iterator beg, iterator end)
void test03() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
}

/*
	reverse算法 反转指定范围的元素
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
*/
// reverse(iterator beg, iterator end)

void test04() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	v.push_back(100);
	v.push_back(50);

	cout << "反转前遍历的结果：" << endl;
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;

	reverse(v.begin(), v.end());
	cout << "反转后遍历的结果：" << endl;
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;
}




// 常用的排序算法
int main() {

	// 随机数种子
	srand((unsigned int)time(NULL));

	test04();

	return 0;
}