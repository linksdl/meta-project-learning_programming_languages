#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
/*
	函数对象适配器
	1. 绑定 bind2nd
	2. 继承 public binary_function<参数类型，参数类型，返回值类型>
	3. 加 const
*/
class MyPrint : public binary_function<int,int,void>{
public:
	void operator()(int num, int start) const {
		// cout << num + start << endl;
		cout << "num = " << num << " start = " << start << " sum = " << num + start << endl;
	}
};

void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	cout << "请输入起始累加值：" << endl;
	int start;
	cin >> start;

	for_each(v.begin(), v.end(), bind2nd(MyPrint(), start));	// 推荐使用
	// for_each(v.begin(), v.end(), bind1st(MyPrint(), start));
}

class GreaterFiver : public unary_function<int, bool>{
public:
	bool operator()(int val) const{
		return val > 5;
	}
};

void test02() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	/*vector<int>::iterator ret = find_if(v.begin(), v.end(), GreaterFiver());
	if (ret != v.end()) {
		cout << "找到了大于5的数据为：" << *ret << endl;
	}
	else {
		cout << "未找到" << endl;
	}*/

	// 一元取反适配器
	// vector<int>::iterator ret = find_if(v.begin(), v.end(), not1(GreaterFiver()));
	vector<int>::iterator ret = find_if(v.begin(), v.end(), not1(bind2nd(greater<int>(), 5)));
	if (ret != v.end()) {
		cout << "找到了小于5的数据为：" << *ret << endl;
	}
	else {
		cout << "未找到" << endl;
	}

	// 二元取反适配器
	sort(v.begin(), v.end(), not2(less<int>()));

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

}


// 函数对象适配器  取反适配器
int main() {

	test02();

	return 0;
}