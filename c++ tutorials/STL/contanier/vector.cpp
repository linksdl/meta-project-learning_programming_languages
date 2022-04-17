//
// Created by DAOLIN SHENG on 2022/4/17.
//

#include <iostream>
#include <vector>

using namespace std;

void test01(){
    vector<int> v; // 创建了一个vector 容器
    // 插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // 第一种遍历方式
    // 利用迭代器遍历容器中的数据
    // v.begin() v.end()
    vector<int>::iterator begin = v.begin();
    vector<int>::iterator end = v.end();
    while (begin != end)
    {
        cout << *begin << endl;
        begin ++;
    }


}


int main()
{
    test01();
    return 0;
}