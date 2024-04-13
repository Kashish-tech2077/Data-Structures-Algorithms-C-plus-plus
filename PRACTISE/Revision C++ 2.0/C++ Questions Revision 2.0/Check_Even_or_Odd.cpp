#include <iostream>
using namespace std;

int main(){
    // Simple Program to check that the number is even or odd using if-else
    int num;
    cout << "Enter the NUMBER to check: ";
    cin >> num;
    
    if(num % 2 == 0){
        cout << "The Number is EVEN!";
    }
    else{
        cout << "The Number is ODD!";
    }
    return 0;
}