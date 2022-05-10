//
// Created by DAOLIN SHENG on 2022/5/7.
//

#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    // 登录验证
    string uname, upass;
    cin >> uname >> upass;
    string ans = (uname == "admin" && uname == upass ? "Login Success!" : "Login Fail!");
    cout << ans;

    return 0;
}


