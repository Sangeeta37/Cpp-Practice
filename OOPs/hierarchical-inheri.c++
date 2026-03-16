#include<iostream>
using namespace std;
class A {
public:
hello(){
    cout<<"hiiii......"<<endl;
}
};
class B : public A{
    public:
    Ramram(){
        cout<<"ram ram ji...."<<endl;
    }
};
class C : public A{
    public:

};
int main(){
    B b1;
    b1.hello();
    C c1;
    c1.hello();
}