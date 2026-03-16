#include<iostream>
using namespace std;
class A{
    public:
    int x;
    A(int s){
        x=s;
    }
    friend ostream& operator<<(ostream &out, A &obj);
    

};
ostream& operator<<(ostream &out, A &obj){
        out<<obj.x;
        return out;
    }
int main(){
 A a1(2);
 cout<<a1;
}