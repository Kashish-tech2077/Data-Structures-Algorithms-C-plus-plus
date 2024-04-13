#include <iostream>
using namespace std;

int main()
{
    // Program to convert Decimal to Octal.
    int rem, ans = 0, mul = 1;
    int num;
    cout << "Enter the Num: ";
    cin >> num;

    while(num)
    {
        // Remainder Part
        rem = num % 8;

        // Quotient Part
        num /= 8;

        ans = (rem * mul) + ans;  // Answer Part
        mul *= 10;
    }
    cout << "Octal is: " << ans;

    return 0;
}