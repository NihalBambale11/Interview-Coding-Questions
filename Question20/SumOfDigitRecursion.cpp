//19.	Write a program to find a sum of digits of a number using recursion.

#include<iostream>
using namespace std;

int sumOfDigitRecursion(int num){
    if(num == 0){
        return 0;
    }

    return (num % 10) + sumOfDigitRecursion(num / 10);
}


int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Sum of digits of "<<n<<" is "<<sumOfDigitRecursion(n);
}