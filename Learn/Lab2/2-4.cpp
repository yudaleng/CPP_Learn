//
// Created by 梅书豪 on 2022/5/12.
//
#include<bits/stdc++.h>

using namespace std;

int prime(int num);

int main() {
    int start, end;
    cout << "Input start:";
    cin >> start;
    cout << "Input end:";
    cin >> end;
    cout << "The prime in [" << start << "," << end << "] : " << endl;
    for (int i = start; i <= end; i++) {
        if (prime(i) == 1) cout << i << " ";
    }
}

int prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num*1.0); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}