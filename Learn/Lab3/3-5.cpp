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
    int odd[n], even[n],on = 0,en = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even[en++] = a[i];
        }else{
            odd[on++] = a[i];
        }
    }
    cout<<"The odd number:\n";
    for(int i=0;i<on;i++){
        printf("%d ",odd[i]);
    }
    cout<<"\nThe even number:\n";
    for(int i=0;i<en;i++){
        printf("%d ",even[i]);
    }

}