#include<iostream>
using namespace std;
int minnum(int *x, int *y, int *z){ 
   
    if(*x<=*y && *x<=*z){
       return *x; 
    }
    else if(*y<=*z){
       return *y; 
    }
    else{
   return *z;      
    }
}
int main(){
    int a , b, c;
    cout<<"Enter three number : " ;
    cin>>a>>b>>c;
    int result=minnum(&a, &b, &c) ;
    cout<<"Smallest is: "<<result;
    return 0;
}