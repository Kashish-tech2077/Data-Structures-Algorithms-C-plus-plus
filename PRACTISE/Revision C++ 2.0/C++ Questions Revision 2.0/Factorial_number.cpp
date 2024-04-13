#include <iostream>
using namespace std;

int main()
{
    // Program to print Factorial of a Number;
    int i, num, Fact;
    cout << "Enter the Number to find the Factorial: ";
    cin >> num;

    Fact = 1; //Initialising the value of Fact variable.
    for(i = 1; i <= num; i++)
    {
        Fact = Fact * i;
    }
    cout << "The Factorial of " << num << " is: " << Fact;

    return 0;
}