#include<iostream>
using namespace std;
int main(){
    int a,b,sum,difference,multiply,division,modulus;
    cout<<"Enter a first number:";
    cin>>a;
    cout<<"Enter a second number:";
    cin>>b;
    sum=a+b;
    difference=a-b;
    multiply=a*b;
    division=a/b;
    modulus=a%b;
    cout<<"Sum of two numbers is:"<<sum<<endl;
    cout<<"Difference of two numbers is:"<<difference<<endl;
    cout<<"Multiplication of two numbers is:"<<multiply<<endl;
    cout<<"Division of two numbers is:"<<division<<endl;
    cout<<"Modulus of two numbers is:"<<modulus<<endl;
}