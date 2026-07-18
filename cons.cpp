#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //Constant in C++
    //const int a=5;
    //cout<<a;
    //cout<<endl;
    // a=55; // This will cause a compilation error since a is a constant
    //Manipulators in C++
    //It is used for data formatting
    //int a=1,b=2,c=333;
    //cout<<"Value of a is:"<<a<<endl;
    //cout<<"Value of b is:"<<b<<endl;
    //cout<<"Value of c is:"<<c<<endl;
    //cout<<"Value of a is:"<<setw(10)<<a<<endl;
    //cout<<"Value of b is:"<<setw(10)<<b<<endl;
    //cout<<"Value of c is:"<<setw(10)<<c<<endl;
    //Operator Precedence in C++
    //Priority or order eveluated in an expression!!

    int a=5,b=10,c=15;
    c=(a*5)+b*c;
    cout<<c;
    cout<<endl;
    //Associativity meaining direction if presedence is same then it will go from left to right or right to left;


    

    return 0;
}