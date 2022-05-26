//
// Created by 梅书豪 on 2022/5/12.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum = 0;
    cout<<"Input n:";
    cin>>n;
    int num[n];
    cout<<"Input "<<n<<" nums:";
    for(int i=0;i<n;i++){
        cin>>num[i];
        sum += num[i];
    }
    cout<<"The "<<n<<" numbers is:\n";
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<"\nThe Sum of "<<n<<" numbers is : "<<sum;
}
