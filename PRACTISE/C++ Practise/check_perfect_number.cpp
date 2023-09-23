#include <iostream>
using namespace std;

int main()
{
    // Program to check whether the number is perfect or not?

    // A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. For example, 6 is a perfect number because its divisors are 1, 2, and 3, and 1 + 2 + 3 = 6. Other perfect numbers include 28, 496, and 8, 128.

    int n, i, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    // Finding the divisor of n
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    // Checking if n is equal to the sum
    if (n == sum)
    {
        cout << "It is a Perfect number";
    }
    else
    {
        cout << "It's not a Perfect number";
    }
}