#include <iostream>
using namespace std;

int main()
{
    // Program to print factors using while loop.
    int i, n;
    cout << "Enter n to check factors: ";
    cin >> n;
    i = 1;
    
    while(i <= n)
    {
        if(n % i == 0)
        {
            cout << i << " ";
        }
        i++;
    }
}