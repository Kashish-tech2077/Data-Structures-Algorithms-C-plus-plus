#include <iostream>
using namespace std;

// Problem Statement- Input a String in lowercase and Convert into Uppercase.

// Character_Change Function
char Char_change(char name)
{
    char upper_char = name - 'a' + 'A';
    return upper_char;
}

int main()
{
    char name;
    cout << "Enter the alphabet: ";
    cin >> name;

    // Function Calling
    cout << Char_change(name);

    return 0;
}