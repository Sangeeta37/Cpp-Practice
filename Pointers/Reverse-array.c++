#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int *start = arr;
    int *end = arr + 4;
    int temp;
    while(start<end)// this is comparing the address till middle 
    {
        temp=*start; // used to store start value
        *start=*end;// this is changing value at start
        *end=temp;// this is changing value at end
        start++;
        end--;
    }
    for(int i=0; i<=4; i++)
    {
       cout<<" "<<arr[i]; 
    }
    
    return 0;
}