#include <iostream>
using namespace std;

int main(){
    // Program to convert to fahreinheit to celcius
    // Formula to covert:  °C = (°F - 32) × 5/9

    float fahreinheit;
    cout << "Enter the value of Fahreinheit: ";
    cin >> fahreinheit;

    float celcius = (fahreinheit - 32)* 5/9;
    cout << fahreinheit << " in celcius = " << celcius;

}