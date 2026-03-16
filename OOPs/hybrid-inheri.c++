#include<iostream>
using namespace std;
class A{
    public:
    Ramram(){
        cout<<"ram ram ji...."<<endl;
    }
};
class B : public A{
    public:
    Namaste(){
        cout<<"Namaste ji......"<<endl;
    }

};
class C : public B{
    public:
    Hello(){
        cout<<"hellooooo...."<<endl;
    }
};
class D : public A{};
int main(){
C c1;
c1.Ramram();
D d1;
d1.Ramram();
}