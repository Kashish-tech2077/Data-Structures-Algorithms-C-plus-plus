#include <iostream>
using namespace std;

// For Loop Example
int main(){
    // Question- 2: Print all Odd numbers from 1 to n, take n as an input from the user.

    int number;
    cout << "Enter number: ";
    cin >> number;

    for(int i = 1; i <= number; i++){
        
        if(i % 2 == 1){
            cout << "Odd is: " << i <<endl;
        }

    }    
    
}