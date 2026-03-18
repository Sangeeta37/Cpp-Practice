/*    Write a program:
.Take an integer input from user
.Store it in a variable
.Use a pointer to print:
.Address of variable
.Value using pointer    */
#include<iostream>
using namespace std;
int main(){
    int n=9;
    int *p;
    p=&n;
    cout<<"Address of n :"<<p<<endl;
    cout<<"Value of n :"<<*p<<endl;
    *p=20;
    cout<<"Value of n :"<<n;
    return 0;
}