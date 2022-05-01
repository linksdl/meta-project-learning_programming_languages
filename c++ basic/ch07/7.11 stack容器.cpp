#include <iostream>
#include <stack>
using namespace std;

// stack容器的使用
int main() {

	stack<int> s;	// 栈容器

	// 将元素入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << "栈是否为空：" << s.empty() << endl;
	cout << "获取元素的个数：" << s.size() << endl;

	while (!s.empty()) {

		// 获取栈顶的元素
		cout << s.top() << endl;

		// 移除栈顶的元素
		s.pop();

		cout << "获取元素的个数：" << s.size() << endl;
	}

	cout << "元素的个数： " << s.size() << endl;


	return 0;
}