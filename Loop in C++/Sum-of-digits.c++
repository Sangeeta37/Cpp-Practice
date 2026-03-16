#include<iostream>
using namespace std;
int main(){
    int r, n , sum=0, temp;
    cout<<"Enter a number :";
cin>>n;
   
    while(n!=0){
        r = n % 10 ;
        sum = sum + r ;
        n = n / 10 ;
    }
  cout<<"Sum is : "<<sum;
  return 0 ; 
}