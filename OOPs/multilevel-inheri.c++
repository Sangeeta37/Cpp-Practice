#include<iostream>
using namespace std;

class Geet{
    public:
    radha(){
        cout<<"Rahhe Radhe!!"<<endl;
    }
};
class Krishna: public Geet{
    public:
    krish(){
        cout<<"here krishna hare Rama!!";
    }
};
class Cow: public Krishna{

};
int main(){
    Cow c1;
    c1.radha();
    c1.krish();
}
