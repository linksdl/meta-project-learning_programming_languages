#include <iostream>
#include "MyArray.h"
using namespace std;

// ÖĞÀ¨ºÅÔËËã·ûÖØÔØ  []  arr[index]
int main() {

	MyArray arr(20);
	
	arr.pushBack(10);
	arr.pushBack(20);
	arr.pushBack(30);
	arr.pushBack(40);

	for (int i = 0; i < arr.getSize(); i++) {
		// cout << arr.getData(i) << endl;
		cout << arr[i] << endl;
	}

	// arr.setData(2, 300);
	arr[2] = 300;
	cout << "======================" << endl;

	for (int i = 0; i < arr.getSize(); i++) {
		// cout << arr.getData(i) << endl;
		cout << arr[i] << endl;
	}

	return 0;
}