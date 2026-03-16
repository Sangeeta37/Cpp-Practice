#include<iostream>
using namespace std;

class Geet{
    protected:
    int a1=2;
    
};
class Demo: public Geet{
    public:
    void fun(){
        cout<<"a1 is :"<<a1;
    }
};
int main(){
    Demo d1;
    d1.fun();
}