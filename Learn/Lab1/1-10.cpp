//
// Created by 梅书豪 on 2022/5/9.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int price;
    cout<<"Input amout:";
    cin>>price;
    int p_500 = price / 500;
    int p_100 = price % 500 / 100;
    int p_50 = price % 500 % 100 / 50;
    int p_20 = price % 500 % 100 % 50 / 20;
    int p_10 = price % 500 % 100 % 50 % 20 / 10;
    int p_5 = price % 500 % 100 % 50 % 20 % 10 / 5;
    printf("500卷:%d\n100卷:%d\n50卷:%d\n20卷:%d\n10卷:%d\n5卷:%d",p_500,p_100,p_50,p_20,p_10,p_5);
}