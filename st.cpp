#include<iostream>
using namespace std;

int main(){
    struct employee{
        int id;
        char name[20];
        float salary;
    };
    employee e1;
    e1.id = 1;
    strcpy(e1.name, "John Doe");
    e1.salary = 50000.0;
    cout << "Employee ID: " << e1.id << endl;
    cout << "Employee Name: " << e1.name << endl;
    cout << "Employee Salary: " << e1.salary << endl;
    return 0;
}