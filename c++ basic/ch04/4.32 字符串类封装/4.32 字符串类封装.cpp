#include <iostream>
#include "MyString.h"
using namespace std;

void test1() {
	MyString str = "world";	// MyString("world")
	cout << str << endl;

	MyString str1 = str;
	cout << str1 << endl;
	cout << str1.length() << endl;

	/*char buf[1024] = { 0 };
	cin >> buf;
	cout << buf << endl;*/

	cin >> str1;
	cout << str1 << endl;

}

void test2() {

	MyString s1 = "abc";
	MyString s2 = "def";
	MyString s3 = s1 + s2;		// s1.operator+(s2);
	MyString s4 = s3 + "ghi";	// s1.operator+("ghi");
	cout << s3 << endl;
	cout << s4 << endl;

	MyString s5 = "hello" + s1;	// helloabc
	cout << s5 << endl;

}

void test3() {

	MyString s1 = "abc";
	MyString s2 = "def";
	s1 = s2;	// s1.operator=(s2);
	s2 = "ghi";
	cout << s1 << endl;
	cout << s2 << endl;

}

void test4() {

	MyString s1 = "abcdef";
	cout << s1[3] << endl;
	s1[3] = 'z';
	cout << s1 << endl;
}

void test5() {
	MyString s1 = "abc";
	MyString s2 = "abcd";
	cout << (s1 == s2) << endl;
	cout << (s2 == "abcd") << endl;
}

void test6() {

	MyString s1 = "abc";
	s1 += "def";
	cout << s1 << endl;
	MyString s2 = "igh";
	s1 += s2;
	cout << s1 << endl;
	cout << s2 << endl;

}

// ·â×°×Ö·û´®Àà
int main() {

	// test1();
	// test2();
	// test3();
	// test4();
	// test5();
	test6();

	return 0;
}