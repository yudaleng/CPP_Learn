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
    int b[n][n];
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            b[i][k] = a[k][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cout<<b[i][k]<<" ";
        }
        printf("\n");
    }
}