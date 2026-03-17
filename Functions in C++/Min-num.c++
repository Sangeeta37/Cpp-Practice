#include<iostream>
using namespace std;
int minnum(int a, int b, int c){
    if(a<=b && a<=c){
        return a;
    }
    else if(b<=c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a , b, c;
    cout<<"Enter three number : " ;
    cin>>a>>b>>c;
   int answer=minnum(a,b,c);
   cout<<"Smallest numbere is: "<<answer;
   return 0;
    
}