#include <iostream>
using namespace std;
class Demo {
public:
    int x;
    Demo(int a) {
        x = a;
        cout<<"hello parameterized constructor !"<< endl;
    }

    Demo(const Demo &obj) {
        x = obj.x;
        cout << "Copy constructor called !" << endl;
    }
};
int main() {
    Demo d1(10);   // Calls parameterized constructor
    Demo d2 = d1;  // Calls copy constructor

    cout << d2.x;
}
