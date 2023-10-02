#include <iostream>
using namespace std;

int main(){
    // Question 2.1- Find the factorial of a number n using a while loop and do a while loop.

    int fact = 1, n;
    int i = 1;
    cout << "Enter n: ";
    cin >> n;

    // Using do-while Loop
    do{

        fact = fact * i;
        i++;

    }while(i <= n);
    
    cout << n << " factorial = " << fact; 
}