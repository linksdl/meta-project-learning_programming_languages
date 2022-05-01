#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

/*
	find算法 查找元素
	@param beg 容器开始迭代器
	@param end 容器结束迭代器
	@param value 查找的元素
	@return 返回查找元素的位置
*/
// find(iterator beg, iterator end, value)

class GreaterFive {
public:
	bool operator() (int val) {
		return val > 5;
	}
};

void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// 查找5元素是否存在
	vector<int>::iterator ret = find(v.begin(), v.end(), 5);
	if (ret != v.end()) {
		cout << "找到了元素：" << *ret << endl;
	}
	else {
		cout << "未找到" << endl;
	}

	// 查找大于5的元素
	vector<int>::iterator ret1 = find_if(v.begin(), v.end(), GreaterFive());
	if (ret1 != v.end()) {
		cout << "找到了元素：" << *ret1 << endl;
	}
	else {
		cout << "未找到" << endl;
	}
}

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person& p) {
		return this->m_Name == p.m_Name && this->m_Age == p.m_Age;
	}

	string m_Name;
	int m_Age;
};

void test02() {

	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	// 查找 p4 的数据
	Person p("ddd", 40);
	vector<Person>::iterator ret = find(v.begin(), v.end(), p);

	if (ret != v.end()) {
		cout << "找到了，姓名：" << (*ret).m_Name << " 年龄：" << ret->m_Age << endl;
	}
	else {
		cout << "未找到" << endl;
	}
}

class myCompare : public binary_function<Person*, Person*, bool>{
public:
	bool operator()(Person* p1, Person* p2) const{
		if (p1->m_Name == p2->m_Name && p1->m_Age == p2->m_Age) {
			return true;
		}
		else {
			return false;
		}
	}
};

void test03() {
	vector<Person*> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	Person* person = new Person("bbb", 20);

	vector<Person*>::iterator ret = find_if(v.begin(), v.end(), bind2nd(myCompare(), person));

	if (ret != v.end()) {
		cout << "找到了元素，姓名：" << (*ret)->m_Name << " 年龄：" << (*ret)->m_Age << endl;
	}
	else {
		cout << "未找到" << endl;
	}

}


// 常用的查找算法
int main() {

	test03();

	return 0;
}