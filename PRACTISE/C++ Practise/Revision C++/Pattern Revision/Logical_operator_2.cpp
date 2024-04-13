#include <iostream>
using namespace std;

int main()
{
    // Logical Operator OR(||)
    // Program to check alphabet is vowel or not using OR Operator.

    char name;
    cout << "Enter name: ";
    cin >> name;

    if (name == 'a' || name == 'e' || name == 'i' || name == 'o' || name == 'u')
    cout << "It is VOWEL";
    else
    cout << "It is CONSONANT";

    return 0;
}