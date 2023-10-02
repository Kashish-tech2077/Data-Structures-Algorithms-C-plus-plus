#include <iostream>
using namespace std;

int main(){
    // Question 1- Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

    int i = 1, n;
    cout << "Enter n: ";
    cin >> n;

    // Using While Loop
    while(i <= n){

        if(i % 2 == 0){    // Printing Even Numbers from 1 to n
            cout << i << "\n";
        }

        i++;
    }

}