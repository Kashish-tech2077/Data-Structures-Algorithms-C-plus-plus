#include <iostream>
using namespace std;

int main()
{
    // Program to Convert Binary to Octal.

    // First Convert Binary to Decimal

    int num;
    cout << "Enter the Binary Number: ";
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

    // Second Convert Decimal to Octal
    int rem_2, ans_2 = 0, mul_2 = 1;
    int num_2 = ans;
    cout << "Enter the Num: ";

    while(num_2 > 0)
    {
        // Remainder Part
        rem_2 = num_2 % 8;

        // Quotient Part
        num_2 /= 8;

        ans_2 = (rem_2 * mul_2) + ans_2;  // Answer Part
        mul_2 *= 10;
    }
    cout << "Octal is: " << ans_2;
    
}