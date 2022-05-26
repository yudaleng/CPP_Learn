//
// Created by 梅书豪 on 2022/5/12.
//
#include<bits/stdc++.h>

using namespace std;

int prime(int num);

int main() {
    int num;
    cout << "Input num:";
    cin >> num;
    if (prime(num) == 1) {
        cout << num << " is a prime!";
    } else cout << num << " not a prime!";

}

int prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num*1.0); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
