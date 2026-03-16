#include<iostream>
using namespace std;
class Base{
    public:
    int var;
    Base(int c){
        var=c;
        cout<<"default : "<<c<<endl;
    }
    Base(Base &obj){
        var=obj.var;
        cout<<"hii copy constructor !"<<endl;
    }
};
int main(){
    Base b1(2);
    Base b2(b1);
    cout<<"b2 : "<<b2.var;
}