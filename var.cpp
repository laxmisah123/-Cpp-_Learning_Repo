//between local and global variable
#include <iostream>
using namespace std;
//suppose a variable is declared globally which is written outside the function
int a=10;
//local variable is declared inside the function
    //between local and global variable, local variable will be given preference over global variable
int main(){
    int a=7;
    cout<<"The value of a is:"<<a<<endl;
    return 0;
}