#include <iostream>
#include <cstring>
using namespace std;

// 不利用多态实现计算器类
class Calculator {
public:
	int m_A;
	int m_B;

	int getResult(string oper) {
		if (oper == "+") {
			return m_A + m_B;
		}
		else if (oper == "-") {
			return m_A - m_B;
		}
		else if (oper == "*") {
			return m_A * m_B;
		}
	}
};

/*
	企业开发中，提倡 开闭原则。对扩展进行开放，对修改进行关闭
	多态的好处：代码组织结构清晰，提高代码的可读性，提高可扩展性。
*/

// 使用多态实现计算器类
class AbstractCalculator {
public:
	int m_A;
	int m_B;

	/*virtual int getResult() {
		return 0;
	}*/

	// 纯虚函数
	/*
		当类中有了纯虚函数，这个类属于抽象类。
		抽象类是无法实例化对象
		当子类继承了抽象类，那么这个子类必须要重写父类中的纯虚函数，否则子类也是抽象类
	*/
	virtual int getResult() = 0;
};

// 加法计算器类
class AddCalculator : public AbstractCalculator {
public:
	virtual int getResult() {
		return m_A + m_B;
	}
};

// 减法计算器类
class SubCalculator : public AbstractCalculator {
public:
	virtual int getResult() {
		return m_A - m_B;
	}
};

// 乘法计算器类
class MulCalculator : public AbstractCalculator {
public:
	virtual int getResult() {
		return m_A * m_B;
	}
};

// 多态的案例（计算器类）
int main() {

	// 使用加法计算器
	AbstractCalculator* cal = new AddCalculator;
	cal->m_A = 10;
	cal->m_B = 20;
	cout << cal->getResult() << endl;
	delete cal;

	cal = new SubCalculator;
	cal->m_A = 20;
	cal->m_B = 10;
	cout << cal->getResult() << endl;
	delete cal;


	return 0;
}