#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char y[5];
    char x[5];
    cout << "Enter any String: " ;
    cin >> y;
    strcpy(x,y);
    strrev(x);


    if(x[5] == y[5]){
        cout << "The given string is a Palindrome.";
    }
    else{
        cout<< "The given string is not a Palindrome.";
    }

    

}