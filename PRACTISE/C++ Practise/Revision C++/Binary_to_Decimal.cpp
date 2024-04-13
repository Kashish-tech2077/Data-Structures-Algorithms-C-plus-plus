#include <iostream>
using namespace std;

int main()
{
    // Program to Convert Binary to Decimal.

    int num;
    cout << "Enter the Number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    while(num > 0)
    {
        // Remainder Part
        rem = num % 10;

        // Quotient Part 
        num /= 10;

        ans = (rem * mul) + ans;  // Answer Part
        mul *= 2;
    }
    cout << "Decimal is: " << ans;


    return 0;
}