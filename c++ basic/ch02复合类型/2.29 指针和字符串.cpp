#include <iostream>
using namespace std;

// 指针和字符串
int main() {

	// 创建一个字符串
	char flower[10] = "rose";
	cout << flower << "s are red" << endl;

	const char* p_flower = "rose";
	cout << p_flower << endl;

	/*char ch = 'A';
	char* p_ch = &ch;
	cout << p_ch << endl;*/

	//int arr[] = { 1,2,3 };
	//cout << arr << endl;	// 00AFF6D8 输出的是地址值。

	// 数组名flower是首元素的地址，也就是r字符的地址。
	// 当cout对象在处理字符地址的时候，不是打印地址，而是打印这个地址对应的字符的内容。
	// 把它当成字符串处理，也就是继续往后输出后面的字符的内容，直到遇到空字符'\0'结束。

	// 字符串常量代表字符串，返回的值是首个元素（字符）的地址。
	// 在cout 中，char数组名，char指针以及引号括起来的字符串常量都被解释为字符串串第一个字符的地址。


 
	return 0;
}