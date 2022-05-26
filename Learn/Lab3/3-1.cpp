//
// Created by 梅书豪 on 2022/5/12.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Input n:";
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    //sort
    sort(nums,nums+n);
    //count duplicate elements
    int count = 0,repeat = 0;
    for(int i=0;i<n;){
        int temp = nums[i],k=i;
        while(temp == nums[k]){
            k++;
            repeat++;
        }
        if(repeat!=1){
            count++;
        }
        repeat = 0;
        i = k;
    }
    cout<<"The total number of duplicate elements is:"<<count;
}