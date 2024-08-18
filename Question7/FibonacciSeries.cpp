//7.	Write a program to print Fibonacci series without using recursion?


#include<iostream>
using namespace std;

void fibonacciSeries(int  n){
    int first = 0;
    int second = 1;
    int next;

    if(n>=1){
        cout << first << " ";
    }
    if(n >= 2){
        cout << second << " ";
    }

    for(int i = 3 ; i <= n ; i++){
        next = first + second;
        cout<<next<< " ";
        first = second;
        second = next;
    }
}

int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;

    fibonacciSeries(n);
}