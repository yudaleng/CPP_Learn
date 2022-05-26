//
// Created by 梅书豪 on 2022/5/20.
//
#include<bits/stdc++.h>

using namespace std;
#define PI 3.14159
//#define HELLO(a ,b) a ## b
//union my_union{
//    double a;
//    int v;
//    char c;
//};
//int c = 3;
//
//class Shape{
//    double width;
//    public:
//        Shape(double width = 1.0){
//            this->width = width;
//        }
//        void setWidth(double width){
//            this->width = width;
//        }
//        int getWidth(){
//            return width;
//        }
//};

#define HELLO(a) #a
#define N 10
#ifdef DEBUG
    cerr<<"[DEBUG]"<<endl;
#endif
#define DEBUG 1

int main() {
//    printf("%d %d %d %d",sizeof(my_union),sizeof(double),sizeof(int),sizeof(char));

//    int i, r, s, rem, n;
//    cin >> n;
//    for (i = 0; i <= n; i++) {
//        s = 0;
//        r = n;
//        while (r > 0) {
//            rem = r % 10;
//            s += pow(rem, 3);
//            r = r / 10;
//        }
//        if (s == n) {
//            printf("%d  %d\n", n,i);
//            continue;
//        }
//    }

//    int n,s,t,i;
//    cin>>n;
//    s = 0;
//    t = 0;
//    i = 1;
//    do{
//        t = t*10+5;
//        s = s+t;
//        i = i+1;
//    } while (i<=n);
//    printf("%d",s);
//    int xy = 1234;
//    cout<< HELLO(x,y)<<endl;

//    Shape shape(6.0);
//    cout<<"shape "<<shape.getWidth();

//    int a = 1,b = 2;
//    cout<<a+b+c<<endl;
//    {
//        int a = 10;
//        b = 20;
//        cout<<a + b + c<<endl;
//    }
//    int c = 30;
//    cout<<a + b + c <<endl;

//    int arr[] = {1,2,3,4,5};
//    size_t  size = sizeof(arr)/sizeof(int);
//    size_t i =0;
//    while(true){
//        cout<<arr[i]<<" ";
//        i++;
//        if(i >= size)
//            break;
//    }

//    cout<<HELLO(test)<<endl;
//    signed ca = 128;
//    signed const cb = 256;
//    enum{
//        a = 1,
//        b = N,
//        c = a+b,
//        d = ca,
//        e = cb + N,
//        f = ca * 256,
//        h = cb / 2
//    };
//    cout<<DEBUG<<endl;


//    int n,s = 0,r;
//    cin>>n;
//    while(true){
//        r = n%10;
//        s = s*10+r;
//        n = n / 10;
//        if (n == 0) break;
//
//    }
//    printf("%d",s);
//
    int n;
    cin>>n;
    int a [n];
    int i = 1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i = n;i>=1;i--){
        printf("%d ",a[i]);
    }

}