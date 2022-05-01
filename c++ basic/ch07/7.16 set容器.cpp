#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

class myCompare {
public:
	bool operator()(int v1, int v2) const {
		return v1 > v2;
	}
};

void test01() {

	// 通过仿函数，改变set容器的排序规则
	set<int, myCompare> s;

	s.insert(10);
	s.insert(30);
	s.insert(40);
	s.insert(20);
	s.insert(50);

	for (set<int, myCompare>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// set<int>::iterator it = s.begin();
	// it = it + 1;
	// sort()
}

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class myComparePerson {
public:

	bool operator()(const Person& p1, const Person& p2) const {
		return p1.m_Age > p2.m_Age;
	}

};

void test02() {

	set<Person, myComparePerson> s;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 50);
	Person p4("ddd", 30);
	Person p5("eee", 15);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);

	for (set<Person, myComparePerson>::iterator it = s.begin(); it != s.end(); it++) {
		cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;
	}
}


// set容器的排序
int main() {

	test02();

	return 0;
}