//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s1;
    cin >> s1;
    int len = s1.size();
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (s1[i] != s1[j]) {
            cout << "Not Palindrome string";
            return 0;
        }
    }
    cout << "Palindrome string";

    return 0;
}