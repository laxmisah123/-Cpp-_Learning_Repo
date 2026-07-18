#include <iostream>
using namespace std;
//Control Structures in C++

int main() {
    int age;
   cout<<"Tell me your age:"<<endl;
   cin>>age;
   if(age<18){
    cout<<"You cannot drive"<<endl;
   }
    else if(age==18){
    cout<<"You are eligible to drive but with some restrictions"<<endl;
}
else{
    cout<<"You can drive"<<endl;
}
return 0;
}