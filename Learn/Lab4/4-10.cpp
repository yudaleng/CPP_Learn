//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>
using namespace std;

int  f(int a[],int idx,int max,int n);


int  f(int a[],int idx,int max,int n){
    if(idx<n) {
        if(a[idx]>max) max=a[idx];
    }
    else {
        return max;
    } ;
    f(a,idx+1,max,n);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int m=f(a,0,INT_MIN,n);
    cout<<m;
    return 0;
}