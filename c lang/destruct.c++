#include<iostream>
using namespace std;

class Car
{
public:
Car(){
    cout<<"hii constructor!"<< endl;
}

~Car(){
    cout<<"hii destructor!"<< endl;
}

};

int main() {

    Car c1;
    //Car c2();
    return 0;
}