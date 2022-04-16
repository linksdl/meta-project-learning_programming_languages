#include <iostream>
using namespace std;

int main()
{
    int var = 3;
    int * const c_p = &var;

    /* TODO: 以下语句并不会报错 */
    *c_p = 12; // error: assignment of read-only variable 'c_p'
    /* END TODO */

    return 0;
}