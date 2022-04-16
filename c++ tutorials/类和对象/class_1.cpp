#include <iostream>

using namespace std;


class Box
{
    public:
        double length;
        double width;
        double heigth;

        // 成员函数声明
        double get(void);
        void set(double len, double wid, double hei);
};

// 成员函数定义
double Box::get(void)
{
    return length * width * heigth;
}

void Box::set(double len, double wid, double hei)
{
    length = len;
    width = wid;
    heigth = hei;
}

int main()
{
    Box box1; // 声明 Box1，类型为 Box
    Box box2;
    Box box3;

    double volume = 0.0; 

    box1.heigth = 5.0;
    box1.width = 6.0;
    box1.heigth = 7.0;

    // box 2 详述
    box2.heigth = 10.0;
    box2.length = 12.0;
    box2.width = 13.0;
    // box 1 的体积
    volume = box1.heigth * box1.length * box1.width;
    cout << "box1 的体积：" << volume <<endl;

    // box 2 的体积
    volume = box2.heigth * box2.length * box2.width;
    cout << "box2 的体积：" << volume <<endl;

    // box 3 详述
    box3.set(16.0, 8.0, 12.0); 
    volume = box3.get(); 
    cout << "box3 的体积：" << volume <<endl;
    return 0;


}