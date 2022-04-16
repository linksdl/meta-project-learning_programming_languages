#include <iostream>
using namespace std;

class A
{
    private: 
        int var;
        static int s_var; // 静态成员变量
    public:
        void show()
        {
            cout << s_var ++ << endl;
        }

        static void s_show()
        {
            cout << s_var << endl;
            // cout << var << endl; // // error: invalid use of member 'A::a' in static member function. 静态成员函数不能调用非静态成员变量。无法使用 this.var
            // show();  // error: cannot call member function 'void A::show()' without object. 静态成员函数不能调用非静态成员函数。无法使用 this.show()
        }
};

int A::s_var = 1;

int main()
{
    // cout << A::sa << endl; // error: 'int A::sa' is private within this context
    A ex;
    ex.show();
    A::s_show();
}
