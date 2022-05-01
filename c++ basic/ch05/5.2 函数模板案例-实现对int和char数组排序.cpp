#include <iostream>
using namespace std;

// 1. T可以是别的名称 T1、V ,只要遵循标识符的规范
// 2. 类型可以有多个，多个之间用逗号隔开 template<typename T, typename T1>
// 3. T的范围，在哪个函数上就可以在哪个函数中使用，其他的函数中使用不了
template<typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

// template<class T>
template<typename T>
void mySort(T arr[], int len) {

	for (int i = 0; i < len; i++) {

		for (int j = i + 1; j < len; j++) {
			if (arr[i] < arr[j]) {
				mySwap(arr[i], arr[j]);
			}
		}

	}

}

template <class T>
void printArr(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

// 使用函数模板实现案例：实现对 int 和 char 数组的排序
int main() {

	char chs[] = { 'a', 'b', 'c', 'd' };
	int len = sizeof(chs) / sizeof(char);
	mySort(chs, len);
	printArr(chs, len);

	cout << "============" << endl;

	int arr[] = { 10, 5, 90, 100, 32 };
	len = sizeof(arr) / sizeof(int);
	mySort(arr, len);
	printArr(arr, len);

	return 0;
}