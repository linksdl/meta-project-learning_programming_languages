//
// Created by DAOLIN SHENG on 2022/4/17.
//

#include <iostream>
using namespace std;


string();
string(const string& str);
string(const char* s);
string(int n, char c);


string& operator=(const char* s);
string& operator=(const string &s);
string& operator=(char c);
string& assign(const char *s);
string& assign(const char *s, int n);
string& assign(const string &s);
string& assign(int n, char c);
string& assign(const string &s, int start, int n);


void test01() {
    string str1;
    string str2 = str1;
    // string str2(str1);
    string str3 = "abcd";
    // string str3("abcd");
    string str4(5, 'a');

    cout << "str3 = " << str3 << endl;
    cout << "str4 = " << str4 << endl;

    string str5;
    str5.assign("abcdefghi", 6);
    cout << "str5 = " << str5 << endl;	// abcdef

    // string& assign(const string & s, int start, int n);//Ω´s¥”startø™ ºn∏ˆ◊÷∑˚∏≥÷µ∏¯◊÷∑˚¥Æ
    string str6;
    str6.assign(str5, 1, 3);	// bcd
    cout << "str6 = " << str6 << endl;

}

/*
char& operator[](int n);
char& at(int n);
*/

void test02() {
    string str = "hello world";

    //for (int i = 0; i < str.size(); i++) {
    //	// cout << str[i] << endl;
    //	cout << str.at(i) << endl;
    //}

    // cout << str[100] << endl;
    try {
        cout << str.at(100) << endl;
    }
    catch (out_of_range e) {
        cout << e.what() << endl;
    }
}


int main() {

    test02();

    return 0;
}


