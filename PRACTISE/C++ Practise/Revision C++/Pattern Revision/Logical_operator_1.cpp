#include <iostream>
using namespace std;

int main()
{
    // Logical Operator AND (&&)
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if(a > b && a > c)
    cout << "a is greatest";
    else
    cout << "a is NOT greatest";

    return 0;
}