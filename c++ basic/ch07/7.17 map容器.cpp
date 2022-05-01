#include <iostream>
#include <map>
using namespace std;

void test01() {
	map<int, int> m;

	// 插入数据
	// 第一种方式
	m.insert(pair<int, int>(1, 10));

	// 第三种方式
	m.insert(map<int, int>::value_type(3, 30));

	// 第二种方式
	m.insert(make_pair(2, 20));
	
	// 第四种方式
	m[4] = 40;

	// m[5];

	// 遍历
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}

	/*for (int i = 0; i < m.size(); i++) {
		cout << m[i] << endl;
	}*/
}

class myCompare {
public:
	bool operator() (int v1, int v2) const{
		return v1 > v2;
	}
};

// map的排序
void test02() {
	map<int, int, myCompare> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(10, 20));
	m.insert(make_pair(5, 30));
	m.insert(make_pair(8, 15));

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
}

// map容器
int main() {

	test02();

	return 0;
}