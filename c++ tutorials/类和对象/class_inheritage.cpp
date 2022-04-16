#include <iostream>

using namespace std;

class Shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    
    protected:
        int width;
        int height;
};

// 派生类
class Ractangle : public Shape
{
    public:
        int getArea()
        {
            return (width * height);
        }
};

int main(void)
{
    Ractangle Rect;

    Rect.setHeight(5);
    Rect.setWidth(7);

    // 输出对象的面积 
    cout << "Total area: " << Rect.getArea() << endl;

    return 0;

}