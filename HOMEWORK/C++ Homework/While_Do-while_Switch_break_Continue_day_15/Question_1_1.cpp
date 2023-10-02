#include <iostream>
using namespace std;

int main(){
    // Question 1.1- Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

    int i = 1, n;
    cout << "Enter n: ";
    cin >> n;

    // Using do-while Loop
    do{
        if(i % 2 == 0){
            cout << i << "\n";
        }
        i++;
    }while(i <= n);
}