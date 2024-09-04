//11.	Write a program to print factorial of given number without using recursion?

#include<iostream>
using namespace std;

int factorialRecursion(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    return num * factorialRecursion(num-1);
}


int main(){
    int num ;
    cout<<"Enter the number : ";
    cin>>num;

    int x = factorialRecursion(num);
    cout<<"Factorial of " <<num<< " is "<<x<<endl;
}