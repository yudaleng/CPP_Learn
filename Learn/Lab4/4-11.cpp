//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>

using namespace std;

string re(string &str);

string re(string &str) {
    if (str.length() > 1) {
        string sub = str.substr(1, str.length() - 2);
        string s1 = str.substr(str.length() - 1, 1);
        string s2 = str.substr(0, 1);
        string s3 = s1 + re(sub) + s2;
        return s3;
    }
}

int main() {
    string str;
    cin >> str;
    cout << re(str);

    return 0;
}