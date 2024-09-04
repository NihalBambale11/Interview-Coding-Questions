
//18. Write a program to check the given number format is in binary or not.

#include<iostream>
using namespace std;

bool isBinary(string s){
    for(char x : s){
        if(x != '0' && x != '1'){
            return false;
        }
    }
    return true;
}


int main(){
    string str;
    cout<<"Enter a number: ";
    cin>>str;

    bool x = isBinary(str);
    cout<<x;

}
