//
// Created by 梅书豪 on 2022/5/9.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Input a:";
    cin>>a;
    cout<<"Input b:";
    cin>>b;
    cout<<"Input c:";
    cin>>c;
    double temp = a > b ? a : b;
    cout<<"The largest number is "<<(temp > c ? temp : c);

}