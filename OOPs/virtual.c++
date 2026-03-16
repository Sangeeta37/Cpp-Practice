#include<iostream>
using namespace std;
class Base {
public:
    virtual void sound(){
        cout << "Base sound" << endl;
    }
};
class Child: public Base {
    public:
    void sound(){
        cout << "drived sound" << endl;
    }
};
int main(){
    Base *A;
    Child B;
    A = &B;
    A-> sound();
    return 0;
}