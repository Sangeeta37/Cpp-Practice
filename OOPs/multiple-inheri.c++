#include<iostream>
using namespace std;

class Demo {
   
    public:
     void fun() {
        cout<<"hii how are you"<< endl;
    }
};
class Child {
    public:
    void toy() {
        cout<<"playing with toy"<< endl;
    }
   
};
class Geet: public Demo ,public Child {
    public:

};
int main(){
    Demo d1;
    d1.fun();
    Child c1;
    c1.toy();
    Geet g1;
    g1.toy();
    g1.fun();
    //return 0;
}