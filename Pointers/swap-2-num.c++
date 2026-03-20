#include<iostream>
using namespace std;
void Swap(int *p1,int *p2){
    int temp;
     temp=*p1;
     *p1=*p2;
     *p2=temp;


}
int main(){
    int a,b;
    cout<<"a & b are :";
    cin>>a>>b;
    Swap(&a, &b);
    cout<<"now a :"<<a<<endl;
    cout<<"now b :"<<b;
    return 0;
}