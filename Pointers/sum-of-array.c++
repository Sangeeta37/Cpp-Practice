#include<iostream>
using namespace std;
int main(){
    int arr[]={ 1,2,3,4,5};
    int *p=arr;
    cout<<"Enter array element :";
    for(int j=0; j<5; j++){
       cin>>*(p+j);
    }
    int sum=0;
    for(int i=0; i<=4; i++){
        sum=sum+*(p+i);
    }
    cout<<"sum is :"<<sum;
    return 0;
}