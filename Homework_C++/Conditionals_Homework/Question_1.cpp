#include <iostream>
using namespace std;

// #Coder Army
int main(){
    // Question: Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

    int number_1, number_2; //Initialize the 'a' and 'b' variable 
    cout << "Enter Number 1: ";
    cin >> number_1 ;                    //Input 'a' value
    cout << "Enter Number 2: ";
    cin >> number_2;                     //Input 'b' value

    // Check which Number is Greater
    if(number_1 > number_2){
        cout << "Number_1 is GREATER.";
    }
    else{
        cout << "Number_2 is GREATER.";
    }
}