#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int tem=n;
  int rem;
  int p=0;
    while(n!=0){
    rem=n%10;
   p=p*10+rem;
   n=n/10;
    }
 if(tem==p){
    cout<<"Number is palindrome";
 }
 else{
    cout<<"Number is not palindrome";
 }
    return 0;
}