#include<iostream>
using namespace std;

int main(){
    int n = 5;

    int *arr = new int[n];

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Maximum = " << max;

    delete[] arr;

    return 0;
}