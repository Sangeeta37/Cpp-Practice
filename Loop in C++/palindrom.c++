#include<iostream>
using namespace std;

int main(){

    int n, rev = 0, r;

    cout<<"Enter number: ";
    cin>>n;
    int temp = n; // becoz n value is not same after while loop so, temp is used
    while(n != 0){

        r = n % 10;   // Exract last digit    
        rev = rev * 10 + r;  // add to reverse
        n = n / 10;   // remove first digit   

    }

   if(temp == rev)
{
    cout<<temp<<" is Palindrom";
}
else{
    cout<<temp<<" is Not Palindrom";
} 
return 0;
}