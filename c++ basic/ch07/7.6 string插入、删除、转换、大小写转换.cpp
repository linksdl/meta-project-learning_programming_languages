#include <iostream>
using namespace std;

/*
string& insert(int pos, const char* s); //插入字符串
string& insert(int pos, const string& str); //插入字符串
string& insert(int pos, int n, char c);//在指定位置插入n个字符c
string& erase(int pos, int n = npos);//删除从Pos开始的n个字符 
*/
void test01() {
	// 插入
	string str = "hello";
	str.insert(2, "22");
	cout << str << endl;	// he22llo

	// 删除
	str.erase(2,2);
	cout << "===" << str << "===" << endl;
}

void dowork(const char* str) {

}
void dowork1(string str) {	// string str = "hello";

}

// string 和 c-style 字符串转换
void test02() {
	const char* str = "hello";
	// const char * 转换成string
	string str2(str);	// string str2 = string(str);
	string str3 = "hello";

	// string 转 const char *
	const char * s = str2.c_str();

	// dowork(str2);
	dowork(str2.c_str());

	dowork1(str);
}

// 大小写转换
void test03() {
	string str = "abcDEfG";
	for (int i = 0; i < str.size(); i++) {
		// str[i] = toupper(str[i]);
		str[i] = tolower(str[i]);
	}
	cout << str << endl;
}

// 字符串重新分配内存后，再使用原来的引用可能会发生错误
void test04() {

	string s = "abcdefg";

	char& a = s[2];
	char& b = s[3];

	a = '1';
	b = '2';
	cout << s << endl;
	cout << (int*)s.c_str() << endl;

	s = "pppppppppppppppppppp";

	// a 和 b 不能再使用了
	//a = '1';
	//b = '2';
	cout << s << endl;
	cout << (int*)s.c_str() << endl;

}


// string 插入和删除、string和c字符串转换、大小写转换
int main() {

	test04();

	return 0;
}