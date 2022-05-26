//
// Created by 梅书豪 on 2022/5/12.
//

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b);

int main()
{
    int a,b;
    cout<<"Input a:";
    cin>>a;
    cout<<"Input b:";
    cin>>b;
    cout<<"The GCD for "<<a<<" and "<<b<<" is "<<gcd(a,b);
}
int gcd(int a,int b){
    if(a < b){
        int temp = a;
        a = b;
        b = temp;
    }
    int temp = 1;
    while(temp != 0){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}