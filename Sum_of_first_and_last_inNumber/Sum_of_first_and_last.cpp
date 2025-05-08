#include<iostream>
using namespace std;

int main(){
    int num, firstDigit, lastDigit;

    cout<<"Enter the number: ";
    cin>>num;

    lastDigit = num % 10;

    while(num >= 10){
        num /= 10;
    }
    firstDigit = num;

    int sum = firstDigit + lastDigit;

    cout<<"First digit: "<<firstDigit<<endl;
    cout<<"Last digit: "<<lastDigit<<endl;
    cout<<"Sum of the first and last digits: "<<sum;
}