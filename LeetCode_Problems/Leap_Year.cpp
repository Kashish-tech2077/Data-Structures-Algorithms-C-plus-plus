#include <iostream>
using namespace std;

int main(){
    // Program to check the given year is Leap Year or not?

    int year;
    cout << "Enter Year: ";
    cin >> year;

    if(year % 400 == 0){
        cout << "It is Leap Year.";
    }
    else if(year % 4 == 0 && year % 100 != 0){
        cout << "It is Leap Year";
    }
    else{
        cout << "It is NOT a Leap Year.";
    }
}