#include <iostream>
using namespace std;

int main(){
    // Quesion- 1: Write a program to convert binary numbers to decimal numbers using a for loop.

    int num;
    int rem, ans = 0, mul = 1;
    cout << "Enter Binary Number: ";
    cin >> num;

    for(; num > 0; num = num / 10) {
        rem = num % 10;
        ans = ans + rem * mul;
        mul = mul * 2;
    }
    cout << "Decimal Number: " << ans << endl;
}