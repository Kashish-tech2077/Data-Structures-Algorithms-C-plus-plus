#include <iostream>
using namespace std;

int main()
{
    // Program to print odd numbers upto n using WHILE LOOP.

    int n;
    cout << "Enter the n: ";
    cin >> n;
    int i = 1;

    while(i <= n)
    {
        cout << i << " ";
        i = i+2;  //Updating by 2 number jump
    }

    return 0;
}