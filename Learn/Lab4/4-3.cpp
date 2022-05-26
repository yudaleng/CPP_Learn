//
// Created by 梅书豪 on 2022/5/16.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Input n:";
    cin>>n;
    int a[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cin>>a[i][k];
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        a[i][n]=0;
        for(int k=0;k<n;k++){
            a[i][n] += a[i][k];
        }
    }
    for(int i=0;i<n;i++){
        a[n][i]=0;
        for(int k=0;k<n;k++){
            a[n][i] += a[k][i];
        }
    }
    for(int i=0;i<=n;i++){
        for(int k=0;k<=n;k++){
            printf("%3d",a[i][k]);
        }
        printf("\n");
    }
}