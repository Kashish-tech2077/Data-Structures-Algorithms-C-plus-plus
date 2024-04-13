#include <iostream>
using namespace std;

int main()
{
    // If Company's Package is less than 10LPA then reject otherwise accept. (If-else Practise)
    int Package;
    cout << "Enter the Package: ";
    cin >> Package;
    if (Package >= 10)
    {
        cout << "Accepted the Package.";
    }
    else
    {
        cout << "Rejected the Package.";
    }

    return 0;
}