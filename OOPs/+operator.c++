#include<iostream>
using namespace std;
class A {
    public:
    int x;
    A(int s){
        x=s;
    }
    /*giving new meaning to an operator for user-defined class*/
    A operator + (A obj){
        return A(x+obj.x);
        
    }
};
int main(){
    A a1(1);
    A a2(2);
    A a3 = a1 + a2;
    cout<<a3.x;
}