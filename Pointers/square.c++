#include<iostream>
using namespace std;
void square(int *p){
*p=(*p)*(*p);
}
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    cout<<endl;
    square(&num);
    cout<<"Square of num is :"<<num;
    return 0;
}