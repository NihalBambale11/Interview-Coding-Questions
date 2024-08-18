//	Write a program to swap two numbers without using the third variable?

#include<iostream>
using namespace std;

main(){
    int a;
    int b;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    cout<<"Before swapping a= "<<a<<" b= "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After swapping a="<<a<<" b="<<b;

}