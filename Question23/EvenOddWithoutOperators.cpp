/// 23.	Write a program to Check whether the number is EVEN or ODD, without using any arithmetic or relational operators


#include<iostream>
using namespace std;

bool isEvenWithoutArithmeticOrRelational(int num){
    if(num < 0){
        num = -num;
    }
    while(num > 1){
        num = num - 2;
    }

    return (num == 0);
}


int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isEvenWithoutArithmeticOrRelational(num)) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    return 0;
}