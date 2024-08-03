// 2.	Write a program to check prime number?

#include <iostream>
using namespace std;

bool isPrimeNumber(int n);

int main()
{
    int n;
    cout << "Enter a number you want to check for prime ";
    cin >> n;
    if (isPrimeNumber(n))
    {
        cout << n << " is a Prime number" << endl;
    }
    else
    {
        cout << n << " is not a Prime Number" << endl;
    }
}

bool isPrimeNumber(int n)
{
    if (n == 1 || n == 0)
    {
        return false;
    }
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}