//8.	Write a program to print Fibonacci series using recursion?

#include<iostream>
using namespace std;

int fiboRecursive(int n ){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }

    return fiboRecursive(n-1) + fiboRecursive(n-2);
}

int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;

    for (int i = 0; i < n; i++) {
        cout << fiboRecursive(i) << " ";
    }}