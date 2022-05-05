//
// Created by DAOLIN SHENG on 2022/5/5.
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // 基本类型
    int a;
    cin >> a;
    cout << a << endl; // 整型

    double b;
    cin >> b;
    cout << b << endl; // 浮点型
    printf("%3.f", b);

    char c;
    cin >> c;
    cout << c << endl; // 字符型

    int ia, ib, ic;
    cin >> ia >> ib >> ic;
    cout << ib << endl; // 第二个整数

    char ch;
    cin >> ch;
    cout << (int)ch;  // 字符转ASCII码

    double di;
    cin << di;

    if(di > 0)        // 实现四舍五入
        cout << int(di+0.5) << endl;
    else
        cout << int(di-0.5) << endl;
    cout << round(di) << endl;

    int sa, sb, sc;  // 成绩输入输出
    cin >> sa >> sb >> sc;
    cout << "score1=" << sa << ",score2=" << sb << ",score3=" << sc << endl;

    long stuNo;     // 学生基本信息输入输出
    float cs, ms, es;
    scanf("%ld;%f,%f,%f", &stuNo ,&cs ,&ms ,&es);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", stuNo, cs, ms, es);


    int ca,cb,cc;  // 出生日期输入输出
    scanf("%4d%2d%2d",&ca,&cb,&cc);
    printf("year=%d\nmonth=%02d\ndate=%02d\n",ca,cb,cc);


    int aa, ab;  // 按照格式输入并交换输出
    scanf("a=%d,b=%d", &aa, &ab);
    aa = aa ^ ab;
    ab = aa ^ ab;
    aa = aa ^ ab;
    printf("a=%d,b=%d\n", aa, ab);

    char ccc;  // 大小写转换
    while (cin >> ccc)
    {
        cout << char(ccc + 32) << endl;
    }
    
    return 0;
}