#include <iostream>
using namespace std;

int main(){
    // Quesion- 4: Write a program to convert Octal numbers to decimal numbers.

    int num;
    int ans = 0, rem, mul = 1;
    cout << "Enter Octal Number: ";
    cin >> num;

    while(num > 0)
    {
        // Modulus with 8
        rem = num % 10;
        // Divide by 8
        num = num / 10;
        // Answer
        ans = rem * mul + ans;
        
        mul *= 8;
    }
    cout << "Decimal Number:" << ans << endl;
}