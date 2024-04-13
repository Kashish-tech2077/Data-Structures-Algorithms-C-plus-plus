#include <iostream>
using namespace std;

    // Program to Convert Lowercase to Uppercase.

char Convert(char name)
{
    char ans = name - 'a' + 'A'; // Coverting lowercase to uppercase
    return ans;
}

int main()
{
    char name;
    cout << "Enter the Character: ";
    cin >> name;

    cout << Convert(name); // Function Call and Printing.
}