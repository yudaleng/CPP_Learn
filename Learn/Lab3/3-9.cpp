//
// Created by 梅书豪 on 2022/5/16.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"Input the number you want to trans into binaries:";
    cin>>number;
    int binaries[100] = {0},i = 0;
    while (number != 0){
        binaries[i++] = number % 2;
        number = number / 2;
    }
    for(int k = i-1;k>=0;k--){
        printf("%d",binaries[k]);
    }
}