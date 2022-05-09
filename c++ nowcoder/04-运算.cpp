//
// Created by DAOLIN SHENG on 2022/5/7.
//


#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    //  牛牛买电影票
    int num, ticket_price = 100;
    cin >> num;

    cout << (num * ticket_price) << endl;

    // 计算带余除法
    int a, b;
    cin >> a >> b;
    cout << (a/b) << " " << (a%b) << endl;

    // 整数的个位
    int  c;
    cin >> c;
    cout << c%10;

    // 整数的十位
    int d;
    cin >> d;
    cout << ((d%100)/10) << endl;

    // 开学？ 求模
    int a, b;
    cin >> a >> b;
    if(((a+b)%7) == 0)
        cout << 7 << endl;
    else
        cout << ((a+b)%7);

    // 时间转换
    long seconds;
    cin >> seconds;
    int h, m, s;

    h = seconds / (60 * 60);
    m = (seconds % (60 * 60)) / 60;
    s = seconds % 60;

    cout << h << " " << m << " " << s << endl;

    // 统计成绩
    int len;
    cin >> len;

    float arr[100] = {0};
    for(int i=0; i<len; i++)
    {
        cin >> arr[i];
    }

    float max= arr[0], min= arr[0];
    float total = 0, avg = 0;
    for(int i=0; i<len; i++)
    {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
        total = total + arr[i];
    }
    //     cout << total << endl;
    //     avg = sum / len;
    //  cout << max << " " << min << " " << avg;
    printf("%.2f %.2f %.2f\n", max, min, total/len);


    // 计算三角形的周长和面积
    int a, b, c;
    cin >> a >> b >> c;

    float circumference=0, area =0;

    // 1/4sqrt[(a+b+c)(a+b-c)(a+c-b)(b+c-a)]
    circumference = a + b + c;
    area = 0.25 * sqrt((a+b+c) * ( a+b-c) * (a+c-b) * (b+c-a));

    printf("circumference=%.2f area=%.2f", circumference, area);

    return 0;
}