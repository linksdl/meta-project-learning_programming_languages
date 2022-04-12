#include <iostream>
using namespace std;


#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'



int main()
{
    int area;

    const int  LENGTH_ = 10;
    const int  WIDTH_  = 5;
    const char NEWLINE_ = '\n';

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;

    return 0;

}