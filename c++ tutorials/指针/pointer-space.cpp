#include <iostream>

using namespace std;

class A
{
    public:
        int var1, var2;
        int add()
        {
            return var1 + var2;
        }
        void set_name(string tmp)
        {
            this->name = tmp;  // this 指针：指向类的当前对象的指针常量。
        }
        void set_age(int tmp)
        {
            this->age = age;
        }
        void set_sex(int tmp)
        {
            this->sex = tmp;
        }
        void show()
        {
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
            cout << "Sex: " << this->sex << endl;
        }                           

    private:
        string name;
        int age;
        int sex;

};

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int *p = nullptr;
    cout << sizeof(p) << endl;  // 8字节

    char *p1 = nullptr;
    cout << sizeof(p1) << endl; // 8字节

    A *pa = new A(); // 指向普通对象的指针

    const int c_var = 10;
    const int * pvar = &c_var; // 指向常量对象的指针：常量指针
    cout << *pvar << endl;


    int (*fun_p) (int, int);
    fun_p  = add;
    cout << fun_p(1, 6) << endl; //指向函数的指针：函数指针

    A ex;
    ex.var1 = 3;
    ex.var2 = 4;
    int *pexvar = &ex.var1; // 指向对象成员变量的指针
    cout << *pexvar << endl;

    int (A::*fun_pp)();
    fun_pp = &A::add; // 指向对象成员函数的指针 fun_p
    cout << (ex.*fun_pp)() << endl;

    A *pp = new A();
    pp->set_name("Alice");
    pp->set_age(16);
    pp->set_sex(1);
    pp->show();

    return 0;

}
