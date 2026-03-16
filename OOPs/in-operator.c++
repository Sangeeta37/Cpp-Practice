#include<iostream>
using namespace std;
class A{
    public:
    int x;
    A(){

    }
    A(int s){
        x=s;
    }
    friend istream& operator>>(istream &in, A &obj);
};
istream& operator>>(istream &in, A &obj){
    in>>obj.x;
    return in;
}
int main(){
    A a1;
    cin >> a1 ;
}