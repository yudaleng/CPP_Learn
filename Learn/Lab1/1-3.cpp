//
// Created by 梅书豪 on 2022/5/9.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double centigrade = 0,fahrenheit = 0;
    int choice = 0;
    cout<<"Celsius to Fahrenheit ---->1\nFahrenheit to Celsius ---->2"<<endl;
    cout<<"Your choice:";
    cin>>choice;
    if(choice == 1){
        cout<<"Input the Celsius:";
        cin>>centigrade;
        cout<<"The Fahrenheit of "<<centigrade<<"(Celsius) is : "<<centigrade*1.8+32;
    }else if(choice == 2){
        cout<<"Input the Fahrenheit:";
        cin>>fahrenheit;
        cout<<"The Celsius of "<<centigrade<<"(Fahrenheit) is : "<<(fahrenheit-32)/1.8;
    }else{
        cout<<"Incorrect input！"<<endl;
    }

}