/*#include<iostream>
using namespace std;
int main(){
    int n, sum=0, avg;
    cout<<"Enter size:";
    cin>>n;
    int *arr= new int[n];
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    for(int j=0; j<n; j++){
        sum+=arr[j];

    }
    avg=sum/n;
    cout<<"Average is:"<<avg;
    delete[] arr;
    return 0;
}*/
#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    float avg;

    cout << "Enter size: ";
    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    avg = (float)sum / n;

    cout << "Average is: " << avg;

    delete[] arr;

    return 0;
}