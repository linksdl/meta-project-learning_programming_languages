#include <iostream>

using namespace std;

int main()
{
    int var = 20;  // 实际变量的声明
    int *p;        // 指针变量的声明

    p = &var;      // 在指针变量中存储 var 的地址

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << &var << endl;
    cout << p << endl;

    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *p << endl;

    return 0;
}