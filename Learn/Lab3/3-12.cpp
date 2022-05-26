//
// Created by 梅书豪 on 2022/5/16.
//
#include<bits/stdc++.h>
using namespace std;

bool pd(int a[],int len_a,int b[],int len_b){
    int num = 0;
    int result[len_b];
    for(int i = 0;i < len_a;i++){
        for(int k=0;k < len_b;k++){
            if(a[i] == b[k]){
                result[i] = 5;
                break;
            }
        }
    }
    for(int i=0;i<len_a;i++){
        if (result[i] != 5){
            return false;
        }
    }
    return true;
}

int main()
{
    int len1,len2;
    cout<<"Input table1 len:";
    cin>>len1;
    int table1[len1];
    for(int i=0;i<len1;i++){
        cin>>table1[i];
    }
    cout<<"Input table2 len:";
    cin>>len2;
    int table2[len2];
    for(int i=0;i<len2;i++){
        cin>>table2[i];
    }
    if(len1>=len2){
        if(pd(table2,len2,table1,len1)){
            cout<<"Table2 is a subset of Table1";
        }else{
            cout<<"Table2 is not a subset of Table1";
        }
    }
    if(len1<len2){
        if(pd(table1,len1,table2,len2)){
            cout<<"Table1 is a subset of Table2";
        }else{
            cout<<"Table1 is not a subset of Table2";
        }
    }
}