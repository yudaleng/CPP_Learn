//
// Created by 梅书豪 on 2022/5/16.
//
#include<bits/stdc++.h>
#define random(m,n) (rand()%(n-m+1)+m)
using namespace std;
int main()
{
    int a_len = random(1,1000);
    int b_len = random(1,1000);
    int a[a_len],b[b_len];
    for(int i=0;i<a_len;i++){
        a[i] = rand();
    }
    for(int i=0;i<b_len;i++){
        b[i] = rand();
    }
    cout<<"The arrayA:\n";
    for(int i=0;i<a_len;i++){
        printf("%d ",a[i]);
    }
    cout<<"\nThe arrayB:\n";
    for(int i=0;i<b_len;i++){
        printf("%d ",b[i]);
    }
}