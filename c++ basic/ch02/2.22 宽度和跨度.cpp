#include <iostream>
using namespace std;

// 演示指针变量取值的宽度和+1的跨度
int main() {

	// 宽度
	int num = 0x01020304;
	int* p = &num;

	cout << hex <<  *p << endl;

	short* s = (short *)&num;
	cout << hex << *s << endl;

	// 跨度
	short* s1 = nullptr;
	cout << "s1 : " << s1 << endl;
	cout << "s1 + 1 : " << s1 + 1 << endl;

	int* p1 = nullptr;
	cout << "p1 : " << p1 << endl;
	cout << "p1 + 1 : " << p1 + 1 << endl;

	// 获取第二个和第三个字节的数据
	char* c = (char *)&num;
	short * s3 = (short *)(c + 1);
	cout << hex << *s3 << endl;

	return 0;
}