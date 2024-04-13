#include <iostream>
using namespace std;

int main()
{
    // Program to Convert Octal to Binary.

    // First Convert Octal to Decimal.

    int num;
    cout << "Enter the Octal Number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    while(num > 0)
    {
        // Remainder Part
        rem = num % 10;

        // Quotient Part 
        num /= 10;

        ans = (rem * mul) + ans;  // Answer Part
        mul *= 8;
    }

    // Second Convert Decimal to Binary
    int rem_2, ans_2 = 0, mul_2 = 1;
    int num_2 = ans;
    cout << "Enter the Num: ";

    while(num_2 > 0)
    {
        // Remainder Part
        rem_2 = num_2 % 2;

        // Quotient Part
        num_2 /= 2;

        ans_2 = (rem_2 * mul_2) + ans_2;  // Answer Part
        mul_2 *= 10;
    }
    cout << "Binary is: " << ans_2;
    
}