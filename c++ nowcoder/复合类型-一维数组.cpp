//
// Created by DAOLIN SHENG on 2022/5/7.
//

#include <iostream>
using namespace  std;


int main()
{
    // [NOIP2013]记数问题
    int a, b;
    cin >> a >> b;

    int i, count = 0;
    for(i=1; i <= a; i++)
    {
        int num = i;
        while(num >0)
        {
            if(num%10 == b) count ++;
            num /= 10;
        }
    }
    cout << count << endl;

    // 逆序输出
    int arr[10] = {0};
    for(int i=0; i<10; i++)
    {
        cin >> arr[i];
    }

    //   int len = sizeof(arr) / sizeof(arr[0]);
    int len = 10;
    for(int i=0; i < len; i++)
    {
        cout << arr[i] << " " <<endl;
    }

    //    for(int i : arr)
    //    {
    //        cout << i << " " << endl;
    //    }

    //  N个数之和
//    int len, sum;
//    cin >> len;
//
//    while(len--)
//    {
//        int temp;
//        cin >> temp;
//        sum += temp;
//    }
//    cout << sum << endl;

    // 最高分与最低分之差
    int len;
    cin >> len;

    int min_score=10000, max_score=0;
    while(len--)
    {
        int score;
        cin >> score;
        if(score > max_score) max_score = score;
        if(score < min_score) min_score = score;
    }

    cout << (max_score - min_score) << endl;



    return 0;
}
