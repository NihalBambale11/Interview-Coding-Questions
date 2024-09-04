//22.	Write a program to Multiply an Integer Number by 2 Without Using Multiplication Operator


#include<iostream>
using namespace std;

int  multipleWithoutProductOperator(int  num){
    int mul = 0;
    for(int i = 0 ; i < 2 ; i++){
        mul = addWithoutPlusOperator(mul,num);
    }
    return mul;
}



int addWithoutPlusOperator(int num1,int num2){
    while(num2 != 0){
        num2--;
        num1++;
    }
    return num1;

}

int main(){
    int num1;

    cout<<"Enter the  number : ";
    cin>>num1;

    int x = multipleWithoutProductOperator(num1);
    cout<<"The Multiplication is "<<x<<endl;
}

// #include <iostream>

// using namespace std;

// int multiply(int a, int b) {
//     int result = 0;
    
//     // Handle negative numbers
//     if (b < 0) {
//         a = -a;
//         b = -b;
//     }

//     for (int i = 0; i < b; i++) {
//         result += a;
//     }

//     return result;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;

//     int product = multiply(num1, num2);

//     cout << "The product is: " << product << endl;

//     return 0;
//}