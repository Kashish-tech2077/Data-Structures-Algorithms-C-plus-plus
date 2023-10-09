#include <iostream>
using namespace std;

int main()
{
    // Question 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

    char Alphabet[26];
    for(int i = 0; i<26; i++)
    {
        Alphabet[i] = 'a'+i;
    }
    // Printing all the Alphabets
    for(int i =0; i<26; i++)
    {
        cout << Alphabet[i] << " ";
    }
}