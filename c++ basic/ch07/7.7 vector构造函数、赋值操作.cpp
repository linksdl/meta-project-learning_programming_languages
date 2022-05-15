#include <iostream>
#include <vector>
using namespace std;

/*
构造函数
vector<T> v; //采用模板实现类实现，默认构造函数
vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
vector(n, elem);//构造函数将n个elem拷贝给本身。
vector(const vector &vec);//拷贝构造函数。

赋值
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
vector& operator=(const vector  &vec);//重载等号操作符
swap(vec);// 将vec与本身的元素互换。
*/

void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

    for(vector<int>::iterator it1 = v.begin(); it1 != v.end(); it1++) {
        cout << *it1 << " ";
    }
}




void test01() {
	vector<int> v;
	cout << "初始容量：" << v.capacity() << endl;

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
		cout << v.capacity() << endl; // v.capacity()获取容器的容量
	}
}

void test02() {
	vector<int> v;	// 默认构造
	vector<int> v1(10, 100);	// 10 个100
	printVector(v1);

	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	vector<int> v3(v2);
	printVector(v3);
}

void test03() {
	int arr[] = { 2, 3, 4, 1, 9 };
	vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

	vector<int> v1 = v;
	printVector(v1);

	vector<int> v2;
	v2.assign(v1.begin()+1, v1.end());
	printVector(v2);

	vector<int> v3(10, 100);

	// v2 和 v3的内容进行互换
	v3.swap(v2);
	printVector(v2);
	printVector(v3);
}


// vector构造和赋值操作
int main() {

	test03();

	return 0;
}