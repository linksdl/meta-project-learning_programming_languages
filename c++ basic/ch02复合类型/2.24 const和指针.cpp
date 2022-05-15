//
// Created by DAOLIN SHENG on 2022/4/25.
//
#include <iostream>

using namespace  std;

int main()
{
    int num = 100;

    // 第一种情况(常量指针)：const在*的左边 修饰的* (*p1只读的， p1可读可写)
    const int* p1 =&num;

//    *p1 = 20;
    int data = 20;
    p1 = &data;

    // 第二种情况（指针常量）：const在*的右边 修饰的* (*p2可读可写， p2只读的)
    int* const p2 = &num;
    *p = 200;

//    p2 = &data  error

    // 第三种情况（）：const在*的左右两边，既修饰* 也修饰指针变量（*p3只读，p3只读）
    const int* const p3 = &num;

//    *p3 = 10; error
//    p3 = &data;  error

    return 0;
}
