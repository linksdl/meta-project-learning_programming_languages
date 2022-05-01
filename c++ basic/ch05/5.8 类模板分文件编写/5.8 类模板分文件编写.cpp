#include <iostream>
#include "person.hpp"
using namespace std;

int main() {

	Person<string, int> p("zs", 20);
	p.showPerson();

	return 0;
}