#include <iostream>
using namespace std;

int main()
{
    // Program to calculate the power of a number.
    int n, result, pow, i;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the Power: ";
    cin >> pow;
    result = n; // Initialize result with the base number

    for(i = 1; i < pow; i=i+1)
    {
        result = result * n; // Multiply result by n, pow-1 times
    }
    cout << "The result is: " << result;
    return 0;
}
