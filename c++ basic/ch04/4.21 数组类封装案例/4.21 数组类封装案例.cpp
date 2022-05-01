#include <iostream>
#include "MyArray.h"
using namespace std;

/*
	数组类封装案例
	需求：封装一个类，基于数组完成，实现一些功能（添加数据，获取数据，修改数据）
*/
int main() {

	MyArray arr1;
	cout << "数组的容量为：" << arr1.getCapacity() << endl;
	cout << "数组的大小为：" << arr1.getSize() << endl;

	// 添加数据
	arr1.pushBack(10);
	arr1.pushBack(20);
	arr1.pushBack(30);
	arr1.pushBack(40);

	cout << "数组的容量为：" << arr1.getCapacity() << endl;
	cout << "数组的大小为：" << arr1.getSize() << endl;

	// 遍历数组
	for (int i = 0; i < arr1.getSize(); i++) {
		cout << arr1.getData(i) << endl;
	}

	// 根据位置设置值
	arr1.setData(2, 300);
	cout << "==================" << endl;
 
	// 遍历数组
	for (int i = 0; i < arr1.getSize(); i++) {
		cout << arr1.getData(i) << endl;
	}
	cout << "==================" << endl;

	MyArray arr2(arr1);
	// 遍历数组
	for (int i = 0; i < arr2.getSize(); i++) {
		cout << arr2.getData(i) << endl;
	}


	return 0;
}