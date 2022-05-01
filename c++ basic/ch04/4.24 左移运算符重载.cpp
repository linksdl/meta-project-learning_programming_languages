#include <iostream>
using namespace std;

class Person {

	friend ostream& operator<<(ostream& out, Person& p);

public:

	Person(int a, int b) {
		this->m_A = a;
		this->m_B = b;
	}

private:
	int m_A;
	int m_B;

};

ostream& operator<<(ostream& out, Person& p) {
	out << "m_A : " << p.m_A << " , m_B : " << p.m_B;
	return out;
}

// ×óÒÆÔËËã·ûÖØÔØ  <<  cout << m << endl;
int main() {

	Person p(10, 20);
	// cout << "m_A : " << p.m_A << " , m_B : " << p.m_B << endl;
	cout << p << endl;		// operator<<(cout, p);

	return 0;
}