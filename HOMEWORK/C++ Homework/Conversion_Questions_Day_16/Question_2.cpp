#include <iostream>
using namespace std;

int main(){
    // Quesion- 2: Write a program to convert decimal numbers to binary numbers using a for loop.

    int num;
    int rem, ans = 0, mul = 1;
    cout << "Enter Decimal Number: ";
    cin >> num;

    for(; num > 0; num = num / 2) {
        rem = num % 2;
        ans = ans + rem * mul;
        mul = mul * 10;
    }
    cout << "Binary Number: " << ans << endl;
}