//
// Created by 梅书豪 on 2022/5/9.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> num;
    int size;
    cout<<"enter the size:";
    cin>>size;
    for(int i=0;i<size;i++){
        int temp;
        cin>>temp;
        num.push_back(temp);
    }
    int sum = 0;
    double average;
    for(int i=0;i<size;i++){
        sum += num[i];
    }
    cout<<"The average is:"<<sum/1.0/size;
}