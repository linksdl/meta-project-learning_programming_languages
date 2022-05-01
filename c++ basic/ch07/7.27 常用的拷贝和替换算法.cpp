#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

/*
	copy算法 将容器内指定范围的元素拷贝到另一容器中
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
	@param dest 目标起始迭代器
*/
// copy(iterator beg, iterator end, iterator dest)

void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int> v1;
	v1.resize(v.size());

	copy(v.begin(), v.end(), v1.begin());
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " "; });
	cout << endl;

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

/*
	replace算法 将容器内指定范围的旧元素修改为新元素
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
	@param oldvalue 旧元素
	@param newvalue 新元素
*/
// replace(iterator beg, iterator end, oldvalue, newvalue)

/*
	replace_if算法 将容器内指定范围满足条件的元素替换为新元素
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
	@param callback函数回调或者谓词(返回Bool类型的函数对象)
	@param oldvalue 新元素
*/
// replace_if(iterator beg, iterator end, _callback, newvalue)

class RepalceIf {
public:
	bool operator()(int val) {
		return val > 5;
	}
};

void test02() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// 将容器中的3替换成300
	replace(v.begin(), v.end(), 3, 300);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// 将所有大于5的值，替换成2000
	replace_if(v.begin(), v.end(), RepalceIf(), 2000);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

/*
	swap算法 互换两个容器的元素
	@param c1容器1
	@param c2容器2
*/
// swap(container c1, container c2)
void test03() {

	vector<int> v;
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
		v1.push_back(i + 10);
	}

	cout << "交换前数据：" << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	swap(v, v1);

	cout << "交换后数据：" << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

}

// 常用的拷贝和替换算法
int main() {

	test03();

	return 0;
}