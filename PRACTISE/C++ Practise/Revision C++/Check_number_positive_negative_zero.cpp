#include <iostream>
using namespace std;

int main()
{
    // Program to check that the number is Positive, negative or Zero.
    int num_1;
    cout << "Enter the number to check: ";
    cin >> num_1;
    
    if(num_1 > 0){
        cout << "The number is Positive.";
    }
    else if(num_1 < 0){
        cout << "The number is Negative.";
    }
    else{
        cout << "The Number is Zero.";
    }
    return 0;
}