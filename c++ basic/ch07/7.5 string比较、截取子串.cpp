#include <iostream>
#include <vector>
using namespace std;

/*
compare函数在>时返回 1，<时返回 -1，==时返回 0。
比较区分大小写，比较时参考字典顺序，排越前面的越小。
大写的A比小写的a小。
int compare(const string& s) const;//与字符串s比较
int compare(const char* s) const;//与字符串s比较
*/

void test01() {

	string str1 = "abcde";
	string str2 = "Abcdef";

	int ret = str1.compare(str2);

	if (ret == 0) {
		cout << "str1 == str2" << endl;
	}
	else if (ret == 1) {
		cout << "str1 > str2" << endl;
	}
	else if (ret == -1) {
		cout << "str1 < str2" << endl;
	}
}

// string substr(int pos = 0, int n = npos) const;//返回由pos开始的n个字符组成的字符串
void test02() {

	string str = "abcdefg";

	string subStr = str.substr(2, 3);

	cout << subStr << endl;

	string email = "gaojing@nowcoder.com";

	// 获取@的索引
	int pos = email.find("@");	// pos = 7

	string userName = email.substr(0, pos);
	cout << userName << endl;

}

// 提升
void test03() {

	string str = "www.nowcoder.com.cn";

	vector<string> v;

	int pos = -1;
	int start = 0;
	while (true) {

		pos = str.find(".", start);
		if (pos == -1) {

			string subStr = str.substr(start, str.size() - start);
			v.push_back(subStr);
			break;
		}

		string subStr = str.substr(start, pos - start);
		v.push_back(subStr);
		start = pos + 1;
	}

	for (vector<string>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

}



// string比较、截取子串
int main() {

	test03();


	return 0;
}