#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void printList(const list<int>& li) {
	for (list<int>::const_iterator it = li.begin(); it != li.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

/*
reverse();//反转链表，比如lst包含1,3,5元素，运行此方法后，lst就包含5,3,1元素。
sort(); //list排序
*/
void test01() {
	list<int> li;
	for (int i = 0; i < 10; i++) {
		li.push_back(i);
	}

	printList(li);

	// 反转
	li.reverse();
	printList(li);
}

bool myCompare(int v1, int v2) {
	return v1 > v2;
}

// 排序
void test02() {
	list<int> li;
	li.push_back(10);
	li.push_back(50);
	li.push_back(30);
	li.push_back(18);
	li.push_back(22);

	///list<int>::iterator itBegin = li.begin();
	//itBegin = itBegin + 2;

	// 标准算法适用于 只支持随机访问迭代器的容器
	// 不支持随机访问迭代器的容器，内部会对应提供一些算法
	// sort(li.begin(), li.end());

	// li.sort();	// 默认按照升序排序

	li.sort(myCompare);

	printList(li);
}

class Person {
public:

	Person(string name, int age, int height) {
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	bool operator==(const Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age && this->m_Height == p.m_Height) {
			return true;
		}
		else {
			return false;
		}
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

bool myComparePerson(Person& p1, Person& p2) {
	// 按照年龄排序
	// return p1.m_Age < p2.m_Age;
	if (p1.m_Age == p2.m_Age) {
		return p1.m_Height < p2.m_Height;
	}
	return p1.m_Age < p2.m_Age;
}

void test03() {

	Person p1("张三", 18, 170);
	Person p2("李四", 20, 150);
	Person p3("王五", 19, 170);
	Person p4("赵六", 17, 180);
	Person p5("Tom", 18, 180);
	Person p6("Jerry", 18, 130);

	list<Person> li;
	li.push_back(p1);
	li.push_back(p2);
	li.push_back(p3);
	li.push_back(p4);
	li.push_back(p5);
	li.push_back(p6);

	// li.sort();
	li.sort(myComparePerson);

	for (list<Person>::iterator it = li.begin(); it != li.end(); it++) {
		cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << " 身高：" << (*it).m_Height << endl;
	}
}


// list容器的反转排序功能
int main() {

	test03();

	return 0;
}