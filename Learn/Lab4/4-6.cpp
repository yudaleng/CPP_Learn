//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[1000][1000];
    int b[1000][1000];
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>b[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]!=b[i][j])
            {
                flag=1;
                break;
            }
    if(!flag) cout<<"The two matrices are the same";
    else cout<<"The two matrices are difference";

    return 0;
}