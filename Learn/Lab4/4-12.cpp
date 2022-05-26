//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>

using namespace std;
int cnt1, cnt2;

void f(int n, int m, int odd[], int even[]);

void f(int n, int m, int odd[], int even[]) {

    if (n <= m) {
        if (n % 2 == 0)
            even[cnt1++] = n;
        else odd[cnt2++] = n;
    } else return;

    f(n + 1, m, odd, even);
}

int main() {
    int n, m;
    cin >> n >> m;
    int odd[10000];
    int even[10000];


    f(n, m, odd, even);
    cout << "odd:";
    for (int i = 0; i < cnt1; i++) cout << even[i] << " ";
    cout << endl;
    cout << "even:";
    for (int j = 0; j < cnt2; j++) cout << odd[j] << " ";

    return 0;
}