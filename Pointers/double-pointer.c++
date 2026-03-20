#include<iostream>
using namespace std;

int main(){
    int x = 10;

    int *p = &x;
    int **q = &p;

    **q = **q + 15;

    cout << "Value of x = " << x;

    return 0;
}