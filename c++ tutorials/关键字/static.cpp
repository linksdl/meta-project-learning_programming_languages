#include <iostream>
using namespace std;

class A
{
public:
    static A s_var; // 正确，静态数据成员
    // A var;          // error: field 'var' has incomplete type 'A'
    A *p;           // 正确，指针
    A &var1;        // 正确，引用
};

int main()
{
    return 0;
}