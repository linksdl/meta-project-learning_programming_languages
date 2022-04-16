
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    vector<int> arr = {3, 4, 76, 12, 54, 90, 34};

    sort(arr.begin(), arr.end(), [](int a, int b) {return a > b;});
    for (auto a: arr)
    {
        cout << a << " ";
    }
    return 0;   
}