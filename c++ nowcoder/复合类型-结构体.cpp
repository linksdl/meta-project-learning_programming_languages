//
// Created by DAOLIN SHENG on 2022/5/9.
//

#include <iostream>
using namespace std;

// 结构体
struct student
{
    char name[10];
    int age;
    int id;
};

// 联合体
union one4all
{
    char char_val;
    short short_val;
    int int_val;
};

// 枚举类
enum colors
{
    red, orange, yellow, green, blue, purple
};

enum bits{one = 1, two = 2, four=4, eight=8};



int main()
{
    student stu = {"Tom", 19, 1001};
    cout << stu.name << " " << stu.age << stu.id << endl;

    student stus[2] = { {"Tom", 20, 1002}, {"Kitty", 21, 1003}};

    cout << stus[0].name << stus[0].age << stus[0].id << endl;

    return 0;
}

