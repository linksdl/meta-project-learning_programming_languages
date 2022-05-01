#include <iostream>
using namespace std;

int myDived(int a, int b) {
	if (b == 0) {
		return -1;
	}
	return a / b;
}

int myDived1(int a, int b) {

	int ret = myDived(a, b);
	// ....

}


// Òì³£¸ÅÊö
int main() {

	cout << myDived(10, 0) << endl;


	return 0;
}