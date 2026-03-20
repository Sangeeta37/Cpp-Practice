#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int *p=arr;
    int max=*p;
    for(int i=0; i <=4; i++){
        if(*(p+i)>max){
            max = *(p+i);
        } 
        
    }
    cout<<"maximum is :"<<max;
    return 0;

}