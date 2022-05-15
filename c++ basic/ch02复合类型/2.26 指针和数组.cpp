#include <iostream>
using namespace std;

// 指针在数组中的操作
int main() {

	// 创建一个数组
	int arr[5] = { 10,20,30,40,50 };

	// 需求：创建一个指针变量，保存arr数组中的元素的地址
	int* p = arr;	// int* p; p = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		/*cout << arr[i] << endl;
		cout << *(arr + i) << endl;*/
		// cout << *(p + i) << endl;
		cout << p[i] << endl;
	}

	cout << sizeof(arr) << endl;	// 20
	cout << sizeof(p) << endl;		// 4

	// 不要认为p只能保存首元素的地址
	int* p1 = &arr[2];
	cout << "p1[1] = " << p1[1] << endl;
	cout << "p1[-1] = " << p1[-1] << endl;


	// 案例
	int* p2 = arr;
	cout << *p2++ << endl;		// 10
	cout << (*p2)++ << endl;	// 20	// (*p2) = (*p2) + 1
	cout << *(p2++) << endl;	// 21

	return 0;
}