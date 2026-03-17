#include<iostream>
using namespace std;
int maxnum(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=c){
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
   int answer=maxnum(a,b,c);
   cout<<"Greater numbere is: "<<answer;
   return 0;
    
}