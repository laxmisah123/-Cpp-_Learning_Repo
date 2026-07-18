#include<iostream>
using namespace std;
int main(){
    //Arithmetic Operators
    int a=8;
    int b=7;
    cout<<"Addition: "<<a+b<<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    cout<<"Division: "<<a/b<<endl;
    cout<<"Modulus: "<<a%b<<endl;
    cout<<"Increment: "<<++a<<endl;
    cout<<"Increment:"<<a++<<endl;
    cout<<a<<endl;
    cout<<"Decrement: "<<--b<<endl;
    cout<<"Decrement: "<<b--<<endl;
    cout<<b<<endl;
    //Comparison Operators
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;

    //Logical Operators
    cout<<"The value of logical AND (a==b && a<b) is: "<<
(a==b && a<b)<<endl;
    cout<<"The value of logical OR (a==b || a>b) is: "<<
(a==b || a>b)<<endl;
    cout<<"The value of logical NOT (!(a==b)) is: "<<(!(a==b))<<endl;


    return 0;
}