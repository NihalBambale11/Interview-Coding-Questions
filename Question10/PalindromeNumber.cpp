//10.	Write a program to check palindrome number?

#include <iostream>
using namespace std;

bool isPalindrome(int n);

int main()
{
    int n;
    cout << "Enter a number you want to check for palindrome ";
    cin >> n;
    if (isPalindrome(n))
    {
        cout << n << " is a palidrome number" << endl;
    }
    else
    {
        cout << n << " is not a palindrome Number" << endl;
    }
}

bool isPalindrome(int n){
    int rem;
    int sum = 0;
    int org = n;

    while (n != 0){
        rem = n % 10;
        sum = (sum * 10) + rem;
        n = n / 10;
    }
    if (sum == org){
        return true;
    }
    else{
        return false;
    }
    
}