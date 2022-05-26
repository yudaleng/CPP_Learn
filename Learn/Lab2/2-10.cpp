//
// Created by 梅书豪 on 2022/5/12.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cout << "Input num:";
    cin >> num;
    int temp, n;
    for (int i = 1; i <= num; i++) {
        for (int k = 1; k <= i; k++) {
            if (k == 1) {
                if (i % 2 == 0){
                    temp = -1;
                    n = 0;
                }
                else {
                    temp = 1;
                    n = 1;
                }
            }
            cout << n << " ";
            temp = -temp;
            n += temp;

        }
        cout << "\n";
    }
}