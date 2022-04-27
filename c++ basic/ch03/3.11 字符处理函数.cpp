#include <iostream>
#include <string>
using namespace std;

// 字符处理函数
// 需求：键盘录入一句话，统计这段话中字母字符、数字字符、空白、标点符号等字符的个数。
int main() {

	// 键盘录入数据
	string str;
	cout << "请输入一段话：" << endl;

	// cin >> str;
	getline(cin, str);

	// 定义一个变量记录这些字符的个数
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	for (int i = 0; i < str.size(); i++) {
		
		char ch = str[i];
		if (isalpha(ch)) {
			chars++;
		}
		else if (isspace(ch)) {
			whitespace++;
		}
		else if (isdigit(ch)) {
			digits++;
		}
		else if (ispunct(ch)) {
			punct++;
		}
		else {
			others++;
		}

	}

	cout << chars << " 个字母字符, "
		<< whitespace << " 个空白字符, "
		<< digits << " 个数字字符, "
		<< punct << " 个标点符号字符, "
		<< others << " 个其它字符。 " << endl;

	return 0;
}