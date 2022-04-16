#include <iostream>
#include <cstring>
using namespace std;

class A
{
public:
    int var;
    A(int tmp) // 为了避免隐式转换，可用 explicit 关键字进行声明：
    {
        var = tmp;
    }
};
int main()
{
    A ex = 10; // 发生了隐式转换
    cout << ex.var << endl; // 10
    return 0;
}