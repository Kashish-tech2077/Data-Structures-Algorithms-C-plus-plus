#include <iostream>
using namespace std;

int main()
{
    // Program to Convert Decimal to Binary.

    int num;
    cout << "Enter the Number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    while(num > 0)
    {
        // Remainder Part
        rem = num % 2;

        // Quotient Part 
        num /= 2;

        ans = (rem * mul) + ans;  // Answer Part
        mul *= 10;
    }
    cout << "Binary is: " << ans;


    return 0;
}