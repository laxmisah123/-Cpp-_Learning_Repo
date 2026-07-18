#include<iostream>
using namespace std;
int c=45;
int main(){
   /*int a,b,c;
    //cout<<"Enter the value of a:"<<endl;
    //cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum of a and b is: "<<c<<endl;
    //Scope resolution operator
    cout<<"The value of c is: "<<::c;
    cout<<endl;*/
    //cout<<"Hello world"<<endl;
    //Float double and literal in c++
   // float d=34.5F;
   // long double e=34.5L;
   // cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e<<endl;
   // cout<<"The size of 34.5 is: "<<sizeof(34.5)<<endl;
   // cout<<"The size of 34.5f is: "<<sizeof(34.5f)<<endl;
   // cout<<"The size of 34.5F is: "<<sizeof(34.5F)<<endl;
   // cout<<"The size of 34.5l is: "<<sizeof(34.5l)<<endl;
   // cout<<"The size of 34.5L is: "<<sizeof(34.5L)<<endl;
   //*****---Reference Variables---******/
   //float th=45;
    //float &y=th;
    //cout<<th<<endl;
    //cout<<y<<endl;
    //---Typecasting in c++---
    int a=45;
     float b=45.46;
    cout<<"The value of a is: "<<float(a)<<endl;
    cout<<"The value of a is: "<<(float)a<<endl;
    cout<<"The value of b is: "<<int(b)<<endl;
    cout<<"The value of b is: "<<(int)b<<endl;
    int c=int(b);
    cout<<"The expression is: "<<a+b<<endl;
    cout<<"The expression is: "<<a+int(b)<<endl;
    cout<<"The expression is: "<<a+(int)b<<endl;



   
    return 0; 
}