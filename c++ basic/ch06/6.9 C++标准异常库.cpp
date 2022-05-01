#include <iostream>
#include <stdexcept>	// 标准异常头文件
using namespace std;

class Person {
public:

	Person(int age) {
		if (age < 0 || age >= 150) {
			throw out_of_range("年龄越界，必须在0~150之间");
			// throw length_error("长度出错");
		}
		this->m_Age = age;
	}

	int m_Age;
};

int main() {

	/*Person p1(10);
	cout << p1.m_Age << endl;*/

	try {
		Person p2(150);
	}
	/*catch (out_of_range &e)  
	{
		cout << e.what() << endl;
	}*/
	catch (exception& e) {
		cout << e.what() << endl;
	}
	
	// cout << p2.m_Age << endl;



	return 0;
}