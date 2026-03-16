/* Reverse any Number */ 
#include<iostream>
using namespace std;

int main(){
    int n,rev=0,r;

    cin>>n;

    while(n!=0){
        r=n%10; // Exract last digit 
        rev=rev*10+r; // Add digit to reverse
        n=n/10; // Remove the last digit
    }

    cout<<"Reverse = "<<rev;
    return 0;
}