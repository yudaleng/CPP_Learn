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
    cout<<"The unique elements is:"<<endl;
    if(nums[0]!=nums[1]) cout<<nums[0]<<" ";
    for(int i=1;i<n-1;i++){
        if(nums[i]!=nums[i-1]&&nums[i]!=nums[i+1]){
            cout<<nums[i]<<" ";
        }
    }
    if(nums[n-1]!=nums[n-2]) cout<<nums[n-1]<<" ";
}