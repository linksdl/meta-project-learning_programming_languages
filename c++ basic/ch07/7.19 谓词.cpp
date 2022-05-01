#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 谓词：指的是普通函数或者是仿函数（函数对象）的返回值是bool类型
// 谓词一元谓词（一个参数），二元谓词（两个参数）
// 谓词可以是一个判断式

class Greater20 {
public:

	bool operator()(int val) {
		return val > 20;
	}

};

class myCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

void test01() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// 找第一个大于20的元素
	vector<int>::iterator ret = find_if(v.begin(), v.end(), Greater20());
	if (ret != v.end()) {
		cout << "找到了大于20的第一个元素，值为：" << *ret << endl;
	}
	else {
		cout << "未找到" << endl;
	}

	// 二元谓词
	sort(v.begin(), v.end(), myCompare());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

}

int main() {

	test01();

	return 0;
}