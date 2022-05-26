//
// Created by 梅书豪 on 2022/5/12.
//
#include<bits/stdc++.h>

using namespace std;

void printUp(int num);
void printDown(int num);

int main() {
    int num;
    cout << "Input num:";
    cin >> num;
    printUp(num);
    printDown(num);
}
void printUp(int num){
    for (int i = 1; i <= num; i++) {
        for (int j = 2 * num - 2 * i; j > 0; j--) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* ";
        }
        cout << "\n";
    }
}
void printDown(int num){
    for (int i = num - 1; i >= 0; i--) {
        for (int j = 2 * num - 2 * i; j > 0; j--) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* ";
        }
        cout << "\n";
    }
}