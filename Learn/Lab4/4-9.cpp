//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>
using namespace std;


int f(int a){
    int temp=a,sum,k=temp%10;
    sum+=k;
    temp/=10;
    if(temp==0) return 0;
    f(temp);
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<f(n);;
    return 0;
}