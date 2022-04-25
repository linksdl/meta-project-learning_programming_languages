#include <iostream>
using namespace std;

// 字符串指针变量  和  字符串（字符数组）区别
int main() {

	// 字符串指针变量
	const char* str1 = "hello world";
	cout << sizeof(str1) << endl; // 4

	cout << *str1 << endl; // h
	cout << *(str1 + 1) << endl; // e
	// *str1 = 'H';	  // 错误的，文字常量区只读
	// str1++; str1 = str1 + 1;


	// 字符串（字符数组）
	char str2[] = "hello world";
	cout << str2 << endl;
	cout << sizeof(str2) << endl; // 12
	*str2 = 'H';
	cout << str2 << endl;
	// str2++;  //  不能++ 不能修改的左值
	/*char* p = str2; // Hello world
	p++;*/   //


	// 区别
	// 字符串指针变量
	// str1 变量，在栈区开辟空间，"hello world"在文字常量区开辟空间
	// str1 仅仅保存"hello world"首元素的地址，不是字符串常量本身。
	// str1 不能对"hello world 内容进行修改（写的操作）"
	// str1 本质是变量，可以++

	// 字符串（字符数组）
	// str2根据初始化字符串的大小开辟空间，并且直接存储该字符串的内容
	// 可以通过str2对"helloworld"进行写操作。
	// str2是数组名，是一个符号常量，不能++

	return 0;
}