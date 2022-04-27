#include <iostream>
#include <cstring>
using namespace std;

// 函数和字符串
// 字符串的三种表示形式：char数组， 字符串常量，char * 
// 字符串作为函数的参数
// 需求：编写一个函数计算特定字符在字符串中出现的次数。
unsigned int charCount(const char* str, char ch) {

	// 定义一个变量记录次数(统计变量，计数器)
	unsigned int count = 0;

	// 遍历字符串中的字符，和ch进行比较，如果相等的话，就count+1
	/*for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ch) {
			count++;
		}
	}*/
	while (*str) {
		if (*str == ch) {
			count++;
		}
		str++;
	}

	return count;

}

int main() {

	char arr[15] = "helloworld";
	const char* str = "helloworld";

	int n1 = strlen(arr);
	int n2 = strlen(str);
	int n3 = strlen("helloworld");

	cout << n1 << endl;
	cout << n2 << endl;
	cout << n3 << endl;
	cout << sizeof(arr) << endl;
	cout << sizeof(str) << endl;
	cout << sizeof("helloworld") << endl;

	cout << "================" << endl;

	unsigned int count = charCount(str, 'l');
	cout << count << endl;

	return 0;
}