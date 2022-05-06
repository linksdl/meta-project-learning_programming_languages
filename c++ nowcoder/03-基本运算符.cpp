//
// Created by DAOLIN SHENG on 2022/5/5.
//

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    // 加法运算
    cout << (a+b) << endl;

    // 除法
    int c;
    c  = a/b;
    cout << c << endl;

    // 取余
    cout << a%b << endl;

    // 给定一个浮点数，要求得到该浮点数的个位数。
    double d;
    cin >> d;

    int temp = (int) d;
    cout << temp % 10 << endl;


    return 0;
}