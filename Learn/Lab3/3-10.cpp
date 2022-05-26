//
// Created by 梅书豪 on 2022/5/16.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,number,appeared = 0;
    cout<<"Input m:";
    cin>>m;
    int numbers[m];
    for(int i=0;i<m;i++){
        cin>>numbers[i];
    }
    cout<<"Input SearchNumber:";
    cin>>number;
    for(int i=0;i<m;i++){
        if(numbers[i] == number){
            appeared++;
        }
    }
    if(appeared > m/2){
        cout<<"given number n appears more then m/2 times in a sorted array";
    }else{
        cout<<"given number n not appears more then m/2 times in a sorted array";
    }
}