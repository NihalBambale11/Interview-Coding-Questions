//4.	Write a program to print factorial of given number without using recursion?

#include <iostream>
using namespace std;

int factorialNumber(int n);

int main()
{
    int n;
    cout << "Enter a number to calculate the factorial ";
    cin >> n;
    int fact = factorialNumber(n);
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
}

int factorialNumber(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact = fact * i;
    }

    return fact;
}