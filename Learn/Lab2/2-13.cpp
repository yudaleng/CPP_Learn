//
// Created by 梅书豪 on 2022/5/12.
//
#include<bits/stdc++.h>

using namespace std;

double jc(int n);

int StrongNumber(int num);

int main() {
    int n;
    cout << "Input n:";
    cin >> n;
    cout << "The Strong Number in [1," << n << "]:";
    for (int i = 1; i <= n; i++) {
        if (StrongNumber(i) == 1) {
            cout << i << " ";
        }
    }
}

int StrongNumber(int num) {
    int temp = num, len = 1;
    while ((temp = temp / 10) != 0) {
        len++;
    }
    int nums[len];
    temp = pow(10, len - 1);
    for (int i = 0; i < len; i++) {
        if (i == 0) {
            nums[i] = num / temp;
            temp = temp / 10;
            continue;
        }
        nums[i] = num / temp % 10;
        temp = temp / 10;
    }
    double cj = 0;
    for (int i = 0; i < len; i++) {
        cj += jc(nums[i]);
    }
    if (cj == num) return 1;
    else return 0;
}

double jc(int num) {
    double sum = 1;
    for (int i = 1; i <= num; i++) {
        sum = sum * i;
    }
    return sum;
}