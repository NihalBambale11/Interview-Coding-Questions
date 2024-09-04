//33.	Write a Program to add two integers > 0 without using the plus operator.


#include<iostream>
using namespace std;

int addWithoutPlusOperator(int num1,int num2){
    while(num2 != 0){
        num2--;
        num1++;
    }
    return num1;

}

int main(){
    int num1;
    int num2;
    cout<<"Enter the two numbers : ";
    cin>>num1>>num2;

    int x = addWithoutPlusOperator(num1,num2);
    cout<<"The Sum is "<<x<<endl;
}