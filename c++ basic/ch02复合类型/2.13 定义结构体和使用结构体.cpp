//
// Created by DAOLIN SHENG on 2022/4/24.
//

struct Student
{
    char name[20];
    int age;
    double hight;
};

int main() {
    //定义学生结构体类型，创建结构体变量
    //学生：姓名，年龄，身高
    //结构体初始化
    Student stu1 = { "Tom",10,175.3 };
    int len = sizeof(stu1);
    cout << len << endl;
    struct Student stu2;
    stu2.name = "kitty";
    return 0;
}