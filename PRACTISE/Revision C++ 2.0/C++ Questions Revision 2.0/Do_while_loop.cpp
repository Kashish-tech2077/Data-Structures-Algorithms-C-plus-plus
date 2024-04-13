#include <iostream>
using namespace std;

int main()
{
    // Program to print i to n using DO-WHILE LOOP.

    int i = 1;
    int n;
    cout << "Enter n: ";
    cin >> n;

    do
    {
        cout << i << " ";
        i++;
        
    } while (i <= n);
    
}