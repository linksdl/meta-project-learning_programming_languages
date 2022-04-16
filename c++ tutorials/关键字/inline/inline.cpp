#include <iostream>
using namespace std;

class A{
    public:
        int var;
        A(int tmp){ 
            var = tmp;
        }    
        void fun();
};

inline void A::fun(){
    cout << var << endl;
}

int main()
{    
    int *p = new int[5]; 
    // cout << sizeof(*p) << endl;
    return 0;
}