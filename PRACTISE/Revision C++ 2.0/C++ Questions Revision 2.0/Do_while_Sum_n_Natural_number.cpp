#include <iostream>
using namespace std;

int main()
{
    // Sum of n Natural Numbers using DO-WHILE LOOP.

    int i = 1, n;
    cout << "Enter the n: ";
    cin >> n;
    int sum = 0;

    do
    {
        sum = sum + i;
        cout << sum << " ";
        i++;
    } while (i <= n);
    

    return 0;
}