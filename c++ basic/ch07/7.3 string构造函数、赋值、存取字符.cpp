#include <iostream>
using namespace std;

/*

构造:
string();//创建一个空的字符串 例如: string str;      
string(const string& str);//使用一个string对象初始化另一个string对象
string(const char* s);//使用字符串s初始化
string(int n, char c);//使用n个字符c初始化 

赋值：
string& operator=(const char* s);//char*类型字符串 赋值给当前的字符串
string& operator=(const string &s);//把字符串s赋给当前的字符串
string& operator=(char c);//字符赋值给当前的字符串
string& assign(const char *s);//把字符串s赋给当前的字符串
string& assign(const char *s, int n);//把字符串s的前n个字符赋给当前的字符串
string& assign(const string &s);//把字符串s赋给当前字符串
string& assign(int n, char c);//用n个字符c赋给当前字符串
string& assign(const string &s, int start, int n);//将s从start开始n个字符赋值给字符串


*/

// 构造
void test01() {
	string str1;
	string str2 = str1;
	// string str2(str1);
	string str3 = "abcd";
	// string str3("abcd");
	string str4(5, 'a');

	cout << "str3 = " << str3 << endl;
	cout << "str4 = " << str4 << endl;

	// 赋值
	string str5;
	str5.assign("abcdefghi", 6);
	cout << "str5 = " << str5 << endl;	// abcdef

	// string& assign(const string & s, int start, int n);//将s从start开始n个字符赋值给字符串
	string str6;
	str6.assign(str5, 1, 3);	// bcd
	cout << "str6 = " << str6 << endl;

}

/*
char& operator[](int n);//通过[]方式取字符
char& at(int n);//通过at方法获取字符
*/

void test02() {
	string str = "hello world";

	//for (int i = 0; i < str.size(); i++) {
	//	// cout << str[i] << endl;
	//	cout << str.at(i) << endl;
	//}

	// [] 和 at 区别：[]访问越界，程序直接终止，at访问越界，抛出异常 out_of_range
	// cout << str[100] << endl;
	try {
		cout << str.at(100) << endl;
	}
	catch (out_of_range e) {
		cout << e.what() << endl;
	}
}


// string的构造、赋值、存取字符
int main() {

	test02();

	return 0;
}