#include<iostream>
#include<cmath>
using namespace std;

// 🔹 Prime Function
bool isPrime(int n){

    if(n <= 1)
        return false;

    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

// 🔹 Palindrome Function
bool isPalindrome(int n){

    int temp = n;
    int rev = 0, r;

    while(n != 0){
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    return (temp == rev);
}

// 🔹 Armstrong Function
bool isArmstrong(int n){

    int temp = n;
    int sum = 0, r;

    while(n != 0){
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10;
    }

    return (temp == sum);
}

int main(){

    int num;

    cout<<"Enter a number: ";
    cin>>num;

    // Prime Check
    if(isPrime(num))
        cout<<"Prime Number"<<endl;
    else
        cout<<"Not Prime"<<endl;

    // Palindrome Check
    if(isPalindrome(num))
        cout<<"Palindrome Number"<<endl;
    else
        cout<<"Not Palindrome"<<endl;

    // Armstrong Check
    if(isArmstrong(num))
        cout<<"Armstrong Number"<<endl;
    else
        cout<<"Not Armstrong"<<endl;

    return 0;
}