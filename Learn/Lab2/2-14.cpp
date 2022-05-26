//
// Created by 梅书豪 on 2022/5/12.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,len = 1,temp = 1;
    cout<<"Input num:";
    cin>>num;
    temp = num;
    while((temp = temp / 10 )!= 0){
        len ++;
    }
    int nums[len];
    temp = pow(10,len - 1);
    for(int i=0;i<len;i++){
        if(i == 0){
            nums[i] = num / temp;
            temp = temp / 10;
            continue;
        }
        nums[i] = num / temp % 10;
        temp = temp / 10;
    }
    double cj;
    for(int i=0;i<len;i++){
        cj += pow(nums[i],len);
    }
    if(cj == num){
        cout<<"Yes";
    } else{
        cout<<"No!";
    }
}