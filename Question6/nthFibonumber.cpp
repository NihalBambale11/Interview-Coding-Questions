//6.	Program to find n’th Fibonacci number

#include<iostream>
using namespace std;

int nthFibonacciNumber(int n){
    
    int first = 0 ;
    int second = 1;
    int next;
    for(int i = 2 ; i <= n ; i++){
        next = first + second ;
        first = second ;
        second = next ;
    }

    return second;
    

}

int main(){
    int n;
    cout<<"Enter the nth number you want of Fibonacci number : ";
    cin>>n;

    int ans = nthFibonacciNumber(n);
    cout<<"the nth Fiboonacci number is : "<<ans<<endl;
}