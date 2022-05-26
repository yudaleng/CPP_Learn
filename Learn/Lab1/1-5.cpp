//
// Created by 梅书豪 on 2022/5/9.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0,b = 0;
    cout<<"Input a:";
    cin>>a;
    cout<<"Input b:";
    cin>>b;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"After exchange"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
}