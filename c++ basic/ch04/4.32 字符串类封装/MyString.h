#pragma once
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

class MyString {

	friend ostream& operator<<(ostream& out, MyString& str);
	friend istream& operator>>(istream& in, MyString& str);
	friend MyString operator+(const char* s1, const MyString& s2);

public:
	MyString(const char* str);	// 构造函数
	MyString(const MyString& str);	// 拷贝构造
	~MyString();	// 析构函数
	int length() {
		return m_Length;
	}

	MyString operator+(const MyString& str);
	MyString operator+(const char* str);

	MyString& operator=(const char* str);
	MyString& operator=(const MyString& str);

	char& operator[](int position);

	bool operator==(const MyString& str);
	bool operator==(const char* str);

	MyString& operator+=(MyString& str);
	MyString& operator+=(const char* str);
	
private:
	char* pString;	// 维护在底层的在堆区创建字符数组
	int m_Length;	// 字符串的长度	\0
};

