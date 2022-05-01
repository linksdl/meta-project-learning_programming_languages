#include <iostream>
#include <vector>
using namespace std;

/*
size();//返回容器中元素的个数
empty();//判断容器是否为空
resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
resize(int num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长>度的元素被删除。
capacity();//容器的容量
reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问。
*/

/*
at(int idx); //返回索引idx所指的数据，如果idx越界，抛出out_of_range异常
operator[];//返回索引idx所指的数据，越界时，运行直接报错
front();//返回容器中第一个数据元素
back();//返回容器中最后一个数据元素
*/

void printVector(vector<int> & v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	int arr[] = { 2, 3, 4, 1, 9 };
	vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

	if (v.empty()) {
		cout << "v为空" << endl;
	}
	else {
		cout << "v不为空" << endl;
		cout << "size = " << v.size() << endl;
	}

	printVector(v);

	// v.resize(3);
	// v.resize(7);
	v.resize(7, 100);

	printVector(v);

	cout << v.at(2) << endl;
	cout << v[2] << endl;

	cout << "第一个元素为：" << v.front() << endl;
	cout << "最后一个元素为：" << v.back() << endl;

}


/*
insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele
push_back(ele); //尾部插入元素ele
pop_back();//删除最后一个元素
erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
erase(const_iterator pos);//删除迭代器指向的元素
clear();//删除容器中所有元素
*/

void test02() {
	int arr[] = { 2, 3, 4, 1, 9 };
	vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

	v.insert(v.begin(), 100);	// 100 2 3 4 1 9
	v.insert(v.begin(), 2, 1000);	// 1000 1000 100 2 3 4 1 9
	printVector(v);

	v.push_back(33);	// 1000 1000 100 2 3 4 1 9 33
	printVector(v);

	v.pop_back();
	printVector(v);	// 1000 1000 100 2 3 4 1 9 

	v.erase(v.begin());	
	printVector(v);	// 1000 100 2 3 4 1 9 

	v.clear();
	printVector(v);
}


// vector的大小、数据存取、插入和删除操作
int main() {

	test02();

	return 0;
}