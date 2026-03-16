#include<iostream>
using namespace std;
int main(){
    int r, n , count=0, temp;
    cout<<"Enter a number :";
    cin>>n;
   
    while(n!=0){
        r = n % 10 ; 
       count ++;
        n = n / 10 ;
    }
    cout<<"Count is : "<<count;
    return 0 ; 
}