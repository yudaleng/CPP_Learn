//
// Created by 梅书豪 on 2022/5/16.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Input n:";
    cin >> n;
    int a[n];
    cout << "Please Input the numbers(use blank to digit):\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n, greater());
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}