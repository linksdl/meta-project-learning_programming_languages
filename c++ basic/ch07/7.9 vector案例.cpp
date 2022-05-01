#include <iostream>
#include <vector>
#include <list>
using namespace std;

// 案例1 巧用swap收缩内存
void test01() {

	vector<int> v;

	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}
	cout << "size = " << v.size() << endl;		// 100000
	cout << "capacity = " << v.capacity() << endl;	// 138000+

	v.resize(3);
	cout << "size = " << v.size() << endl;		// 3
	cout << "capacity = " << v.capacity() << endl;	// 138000+

	// 巧用swap函数收缩内存
	vector<int>(v).swap(v);
	cout << "size = " << v.size() << endl;		// 3
	cout << "capacity = " << v.capacity() << endl;	// 3
}

// 案例2 巧用 reserve，预留内存空间
void test02() {
	// reserve	预留空间
	// reverse  反转

	vector<int> v;

	v.reserve(100000);	// 提前预留出空间

	// 统计添加100000数据，重新开辟空间次数
	int* p = nullptr;
	int num = 0;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}

	cout << "num = " << num << endl;
}

// 案例3 逆序遍历
void test03() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// 逆序遍历，非质变
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// 如何判断一个容器的迭代器是否支持随机访问
	vector<int>::iterator itBegin = v.begin();
	itBegin++;
	itBegin--;
	itBegin = itBegin + 2;

	list<int> li;
	li.push_back(10);
	li.push_back(10);

	list<int>::iterator lBegin = li.begin();
	lBegin++;
	lBegin--;
	// lBegin = lBegin + 2; list迭代器不支持随机访问
}



// vector案例
int main() {

	test03();

	return 0;
}