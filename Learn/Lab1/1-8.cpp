//
// Created by 梅书豪 on 2022/5/9.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"Input number:";
    cin>>a;
    if(a < 0 || a > 100){
        cout<<"Error number!";
    }else if(a >= 0 && a <= 10){
        cout<<"The number is in [0,10]";
    }else if(a >= 11 && a <= 20){
        cout<<"The number is in [11,20]";
    }else if(a >= 21 && a <= 30){
        cout<<"The number is in [21,30]";
    }else if(a >= 31 && a <= 40){
        cout<<"The number is in [31,40]";
    }else if(a >= 41 && a <= 50){
        cout<<"The number is in [41,50]";
    }else if(a >= 51 && a <= 60){
        cout<<"The number is in [51,60]";
    }else if(a >= 61 && a <= 70){
        cout<<"The number is in [61,70]";
    }else if(a >= 71 && a <= 80){
        cout<<"The number is in [71,80]";
    }else if(a >= 81 && a <= 90){
        cout<<"The number is in [81,90]";
    }else if(a >= 91 && a <= 100){
        cout<<"The number is in [91,100]";
    }
}