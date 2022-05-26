//
// Created by 梅书豪 on 2022/5/16.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Input n:";
    cin>>n;
    int a[n];
    cout<<"Please Input the numbers(use blank to digit):\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int index = 0;
    cout<<"Please Input the index you want to remove:\n";
    cin>>index;
    int result[n-1];
    for(int i=0;i<index;i++){
        result[i] = a[i];
    }
    for(int i=index;i<n-1;i++){
        result[i] = a[i+1];
    }
    cout<<"The result is:\n";
    for(int i=0;i<n-1;i++){
        printf("%d ",result[i]);
    }
}