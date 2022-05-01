#include <iostream>
#include <list>
using namespace std;

void test01() {

	list<int> li;
	li.push_back(10);
	li.push_back(20);
	li.push_back(30);
	li.push_back(40);

	// 遍历
	for (list<int>::iterator it = li.begin(); it != li.end(); it++) {
		cout << *it << endl;
	}

	cout << "-----------------------" << endl;

	// 遍历
	for (list<int>::reverse_iterator it = li.rbegin(); it != li.rend(); it++) {
		cout << *it << endl;
	}

	list<int>::iterator it = li.begin();
	it++;
	it--;

	// it = it + 2;	// 不支持随机访问
}

void printList(const list<int>& li) {
	// 遍历
	for (list<int>::const_iterator it = li.begin(); it != li.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test02() {

	list<int> li(10, 100);
	printList(li);

	li.push_back(20);
	li.push_back(30);	// 100 ... 100 20 30
	li.push_front(30);
	li.push_front(20);	// 20 30 100 ... 100 20 30
	printList(li);

	li.pop_back();	// 尾删 20 30 100 ... 100 20
	printList(li);
	li.pop_front();	// 头删 30 100 ... 100 20
	printList(li);

	// 插入
	li.insert(li.begin(), 1000);
	printList(li);

	// 删除
	li.erase(li.begin());
	printList(li);

	li.remove(100);
	printList(li);

	li.clear();
	printList(li);

}

void test03() {
	list<int> li;
	li.push_back(10);
	li.push_back(20);
	li.push_back(30);
	li.push_front(100);
	li.push_front(200);
	li.push_front(300);

	printList(li);	// 300 200 100 10 20 30

	if (li.empty()) {
		cout << "li为空" << endl;
	}
	else {
		cout << "li不为空，长度：" << li.size() << endl;
	}

	// 获取第一个元素和最后一个元素
	cout << "第一个元素：" << li.front() << endl;
	cout << "最后一个元素：" << li.back() << endl;
}

// list容器
int main() {

	test03();

	return 0;
}