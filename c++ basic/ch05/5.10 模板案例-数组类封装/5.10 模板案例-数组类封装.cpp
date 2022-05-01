#include <iostream>
#include "myArray.hpp"
using namespace std;

class Person {

public:
	Person() {

	}
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

int main() {

	MyArray<int> intArray(10);
	for (int i = 0; i < 10; i++) {
		intArray.push_Back(i + 100);
	}

	for (int i = 0; i < intArray.getSize(); i++) {
		cout << intArray[i] << endl;
	}

	cout << "======================" << endl;

	MyArray<Person> personArray(10);

	// Person ps[100];
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	personArray.push_Back(p1);
	personArray.push_Back(p2);
	personArray.push_Back(p3);
	personArray.push_Back(p4);
	personArray.push_Back(p5);

	for (int i = 0; i < personArray.getSize(); i++) {
		cout << "ÐÕÃû£º" << personArray[i].m_Name << " ÄêÁä£º" << personArray[i].m_Age << endl;
	}



	return 0;
}