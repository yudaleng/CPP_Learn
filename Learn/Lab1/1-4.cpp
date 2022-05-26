//
// Created by 梅书豪 on 2022/5/9.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Input number:";
    int number = 0;
    cin>>number;
    if(number == 0){
         cout<<"The number "<<number<<" is Zero";
    }else if((number) % 2 == 0 && number > 0){
         cout<<"The number "<<number<<" is Positive even number";
    }else if((number) % 2 == 0 && number < 0){
         cout<<"The number "<<number<<" is Negative odd number";
    }else if((number + 1) % 2 == 0 && number > 0){
         cout<<"The number "<<number<<" is Positive odd number";
    }else if((number + 1) % 2 == 0 && number < 0){
         cout<<"The number "<<number<<" is Negative odd number";
    }
}