#include<iostream>
using namespace std;
int fun(int *p){
*p=*p+1;

}
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    cout<<endl;
    fun(&num);
    cout<<"Now num is :"<<num;
    return 0;
}