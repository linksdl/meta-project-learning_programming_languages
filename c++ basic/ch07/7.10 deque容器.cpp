#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int>& d) {

	// iterator 普通迭代器
	// reverse_iterator 反转迭代器
	// const_iterator 只读迭代器
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		// *it = 1000;
		cout << *it << " ";
	}
	cout << endl;

}

void test01() {
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);

	printDeque(d);

	deque<int> d1;
	d1 = d;
	d1.assign(d.begin(), d.end());

	cout << d1.empty() << endl;
	cout << d1.size() << endl;

	d1.push_front(20);
	d1.push_front(10);

	d1.pop_back();	// 尾删
	d1.pop_front();	// 头删

	d1.insert(d.begin(), 1000);

	d1.erase(d.begin());

	d1.clear();

	printDeque(d1);
}

// deque容器
int main() {

	test01();


	return 0;
}