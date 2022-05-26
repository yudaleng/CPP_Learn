//
// Created by 梅书豪 on 2022/5/12.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cout << "Input num:";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        for (int j = num - i; j > 0; j--) cout << " ";
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << "\n";
    }
}