#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
    int n, sum=0, temp, r;
    cout<<"Enter a number :";
    cin>>n;
    temp=n;
    while(n != 0){
        r = n % 10 ;
        sum = sum + pow(r,3);  //r*r*r ;
        n = n / 10 ;
    }
    if(sum==temp){
        cout<<temp<<" is Armstrong";
    }
    else{
        cout<<temp<<" is not Armstrong";
    }
return 0;
} 