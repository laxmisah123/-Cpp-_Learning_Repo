#include<iostream>
using namespace std;
struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main(){
    struct employee Laxmi;
    Laxmi.eId = 1;
    Laxmi.favChar = 'L';
    Laxmi.salary = 50000.0;
    cout<<"The employee id is: "<<Laxmi.eId<<endl;
    cout<<"The employee favourite character is: "<<Laxmi.favChar<<endl;
    cout<<"The employee salary is: "<<Laxmi.salary<<endl;

    return 0;
}