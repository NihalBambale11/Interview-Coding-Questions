//13.	Write a program to reverse a given number?

#include <iostream>
using namespace std;

int reverseNumber(int n);

int main()
{
    int n;
    cout << "Enter a number to reverse ";
    cin >> n;
    int rev = reverseNumber(n);
    cout<<"Reverse Of "<<n<<" is "<<rev<<endl;
   
}

int reverseNumber(int n){
    int rev = 0 ;
    int rem ;
    while(n != 0){
        rem = n % 10;
        rev = (rev*10)+rem;
        n = n/10;
    }

    return rev;

}
