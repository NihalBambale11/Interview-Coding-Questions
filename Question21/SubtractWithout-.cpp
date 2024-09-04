//21.	Write a program to Subtract Two Number Without Using Subtraction Operator



#include<iostream>
using namespace std;

int subWithoutMinusOperator(int num1,int num2){
    while(num2 != 0){
        num2--;
        num1--;
    }
    return num1;

}

int main(){
    int num1;
    int num2;
    cout<<"Enter the two numbers : ";
    cin>>num1>>num2;

    int x = subWithoutMinusOperator(num1,num2);
    cout<<"The Subraction is "<<x<<endl;
}