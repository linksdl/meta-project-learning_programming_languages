#include <iostream>
#include <set>
using namespace std;

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	set<int> s;
	s.insert(10);
	s.insert(40);
	s.insert(40);
	s.insert(30);
	s.insert(12);
	s.insert(5);

	printSet(s);

	cout << "size : " << s.size() << endl;
}

// 查找，统计
void test02() {
	set<int> s;
	s.insert(10);
	s.insert(40);
	s.insert(40);
	s.insert(30);
	s.insert(12);
	s.insert(40);
	s.insert(5);
	
	set<int>::iterator pos = s.find(300);
	if (pos != s.end()) {
		cout << "找到了元素：" << *pos << endl;
	}
	else {
		cout << "未找到" << endl;
	}

	// 对于set来说，count的返回值要么是0，要么是1
	int num = s.count(40);
	cout << "40的元素的个数为：" << num << endl;

	// lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
	set<int>::iterator ret = s.lower_bound(30);
	if (ret != s.end()) {
		cout << "找到了lower_bound的值为：" << *ret << endl;
	}
	else {
		cout << "未找到" << endl;
	}

	// upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
	ret = s.upper_bound(30);
	if (ret != s.end()) {
		cout << "找到了upper_bound的值为：" << *ret << endl;
	}
	else {
		cout << "未找到" << endl;
	}

	// equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
	pair<set<int>::iterator, set<int>::iterator> ret2 = s.equal_range(30);
	if (ret2.first != s.end()) {
		cout << "找到了lower_bound的值为：" << *ret2.first << endl;
	}
	else {
		cout << "未找到" << endl;
	}

	if (ret2.second != s.end()) {
		cout << "找到了upper_bound的值为：" << *ret2.second << endl;
	}
	else {
		cout << "未找到" << endl;
	}

}

// 对组的创建
void test03() {

	pair<string, int> p1("Tom", 18);
	cout << "姓名：" << p1.first << endl;
	cout << "年龄：" << p1.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 20);
	cout << "姓名：" << p2.first << endl;
	cout << "年龄：" << p2.second << endl;

}

// set容器
int main() {

	test03();

	return 0;
}