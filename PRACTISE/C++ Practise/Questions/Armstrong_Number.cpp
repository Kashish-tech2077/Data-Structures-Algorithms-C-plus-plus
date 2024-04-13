#include <iostream>
#include <math.h>
using namespace std;
//Program to find the Numebr is Armstrong or not?

int Digit_Count(int number)
{
    int count = 0;
    while (number)
    {
        count++;
        number /= 10;
    }
    return count;
}

int Armstrong_Number(int number, int digit)
{
    int n = number, ans = 0, rem;

    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == number)
        return 1;
    else
        return 0;
}

int main()
{
    int number;
    cout << "Enter the Number: ";
    cin >> number;

    // Counting the number of Digits using Digit_Count Function.
    int digit = Digit_Count(number);

    // Checking the number is Armstrong Number or not using Armstrong Function.
    cout << Armstrong_Number(number, digit);

    return 0;
}