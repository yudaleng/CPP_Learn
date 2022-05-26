//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>

using namespace std;

void f(int a[], int idx, int n);

void f(int a[], int idx, int n) {
    if (idx < n) cout << a[idx] << " ";
    else return;
    f(a, idx + 1,n);
}

int main() {
    int n;
    int a[100000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    f(a, 0, n);
    return 0;
}