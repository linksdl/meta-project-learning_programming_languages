#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double price;
    cin >> price;

    double cost = 0.0;
    // write your code here.......
    if(100 <= price < 500)
    {
       cost = price * 0.9; 
    }
    else if (500 <= price < 2000)
    {
        cost = price * 0.8; 
    }
    else if (2000 <= price < 5000)
    {
        cost = price * 0.7; 
    }
    else if (5000 <= price)
    {
        cost = price * 0.6; 
    }
    else{
        cost = price;
    }
    

    cout << setiosflags(ios::fixed) << setprecision(1) << cost << endl;

    return 0;
}