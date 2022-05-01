//
// Created by DAOLIN SHENG on 2022/4/26.
//
#include <iostream>
using namespace  std;

int main()
{
    int a,b;
    for(a=1,b=1;a<=100;a++)
    {
        if (b >= 10)
            break;
        if(b % 3 == 1)
        {
            b += 3;
            continue;
        }
    }
//    printf("%d\n",a);
    cout << a << endl;
    return 0;
}