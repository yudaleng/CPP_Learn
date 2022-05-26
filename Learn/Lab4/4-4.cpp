//
// Created by 梅书豪 on 2022/5/16.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Input n:";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cin>>a[i][k];
        }
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            a[i][k] = 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            printf("%3d",a[i][k]);
        }
        printf("\n");
    }
}