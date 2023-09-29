#include <iostream>
using namespace std;

int main(){
    // HomeWork Question- 2:  Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

    int number;
    cout << "Enter number to check it is Even and Positive: ";
    cin >> number;

    // Number Positive and Greater than 0??
    if(number > 0 && number %2 == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}