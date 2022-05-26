//
// Created by 梅书豪 on 2022/5/9.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int seconds;
    cout<<"Input seconds:";
    cin>>seconds;
    int hours = seconds / 360;
    int minutes = seconds % 360 / 60;
    seconds = seconds % 360 % 60;
    printf("%02d:%02d:%02d",hours,minutes,seconds);
    return 0;
}