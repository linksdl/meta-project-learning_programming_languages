//
// Created by DAOLIN SHENG on 2022/5/6.
//


#include <iostream>

using namespace std;

int main()
{
    // 十六进制转十进制
    int a = 0xABCDEF;

    cout.width(15);
    cout << a << endl;

    // 缩短二进制
    int b = 1234;
    printf("%#o %#X\n", b, b);

    // cout.setf(ios::showbase | ios::uppercase);
    // cout << oct << b << " " << hex << b << endl;

    // 牛牛的空格分隔
//    char a; int b; float c;
//    cin >> a;
//    cin >> b;
//    cin >> c;
//
//    cout << a << " " << b << " ";
//    cout << setiosflags(ios::fixed) << setprecision(6) << c;

    // 进制A+B
        int a, b;
        cin >> hex  >> a >> oct >> b;

        cout << (a + b) << endl;



        return 0;
}




