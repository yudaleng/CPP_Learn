//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>
using namespace std;
void f(int a);

void f(int a){
    int temp=a;
    int k=temp%10;
    cout<<k<<" ";
    temp/=10;
    if(temp==0) return ;
    f(temp);

}

int main(){
    int n;
    cin>>n;
    f(n);
    return 0;
}