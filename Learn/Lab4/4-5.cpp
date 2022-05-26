//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>
using namespace std;

string st,st1,st2;
int p=-1,p1,s,len;

int main(){
    getline(cin,st);
    getline(cin,st1);
    st1=st1+' ';
    len=st1.size();

    for(int i=0;;i++){
        p1=st1.find(' ',p+1);
        st2=st1.substr(p+1,p1-(p+1));
        if(st2==st) s++;
        p=p1;
        if(p==-1) break;

    }
    cout<<"Find the number of substrings is ："<<s;


    return 0;

}