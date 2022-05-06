//
// Created by DAOLIN SHENG on 2022/5/5.
//



#include <iostream>
using namespace std;

// 函数实现计算一个数的阶乘
long long factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }

    return n * factorial(n-1);
}

// 实现相加
long long fsum(int n)
{
    if(n==1)
    {
        return 1;
    }

    return n + fsum(n-1);
}


int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << endl;

}