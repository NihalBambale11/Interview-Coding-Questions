//3.	Write a program to check Armstrong number?


#include <iostream>
#include <math.h>
using namespace std;

bool isArmstrongNumber(int n);

int main()
{
    int n;
    cout << "Enter a number you want to check for Armstrong ";
    cin >> n;
    if (isArmstrongNumber(n))
    {
        cout << n << " is a Armstrong number" << endl;
    }
    else
    {
        cout << n << " is not a Armstrong Number" << endl;
    }
}

bool isArmstrongNumber(int n){
    int sum = 0 ;
    int rem ;
    int count = 0;
    int temp = n;
    while(temp != 0){
        temp = temp / 10 ;
        count++;
    }

    int org = n;
    while(n != 0){
        rem = n % 10 ;
        sum = sum + pow(rem,count) ;
        n = n / 10;
    }

    if(sum == org){
        return true ;
    }
    else{
        return false ;
    }
}