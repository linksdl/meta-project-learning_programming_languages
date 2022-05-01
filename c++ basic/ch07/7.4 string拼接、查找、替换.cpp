#include <iostream>
using namespace std;

/*
string& operator+=(const string& str);//重载+=操作符
string& operator+=(const char* str);//重载+=操作符
string& operator+=(const char c);//重载+=操作符
string& append(const char *s);//把字符串s连接到当前字符串结尾
string& append(const char *s, int n);//把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);//同operator+=()
string& append(const string &s, int pos, int n);//把字符串s中从pos开始的n个字符连接到当前字符串结尾
string& append(int n, char c);//在当前字符串结尾添加n个字符c
*/

void test01() {
	string s1 = "hello";
	s1 += " world";
	cout << s1 << endl;

	string s2 = "nihao";
	s1.append(s2);
	cout << s1 << endl;

	s1.append(3, 'a');
	cout << s1 << endl;

	s1.append(s2, 2, 3);	
	cout << s1 << endl;

}

/*
int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
int find(const char* s, int pos = 0) const;  //查找s第一次出现位置,从pos开始查找
int find(const char* s, int pos, int n) const;  //从pos位置查找s的前n个字符第一次位置
int find(const char c, int pos = 0) const;  //查找字符c第一次出现位置
int rfind(const string& str, int pos = npos) const;//查找str最后一次位置,从pos开始查找
int rfind(const char* s, int pos = npos) const;//查找s最后一次出现位置,从pos开始查找
int rfind(const char* s, int pos, int n) const;//从pos查找s的前n个字符最后一次位置
int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
*/

void test02() {

	string str = "abcdefghde";

	int pos = str.find("de", 4);	// 参数2 代表起始查找的位置，默认0
	// find是从左往右查找，rfind是从右往左查找
	if (pos == -1) {
		cout << "未找到子串" << endl;
	}
	else {
		cout << "找到了子串，位置：" << pos << endl;
	}

	// 替换
	str.replace(1, 3, "1111");
	cout << str << endl;

}


// string的拼接、查找、替换功能
int main() {

	test02();


	return 0;
}