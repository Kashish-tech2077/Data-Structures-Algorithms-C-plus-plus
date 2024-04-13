#include <iostream>
using namespace std;

int main()
{
    // Comparison Operators

    int a, b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    // > Operator
    if(a > b)
    cout << "a is GREATER THAN b";

    // < Operator
    if(a < b)
    cout << "a is LESS THAN b";

    // == Operator
    if(a == b)
    cout << "a is EQUAL TO b";

    // >= Operator
    if(a >= b)
    cout << "a is GREATER THAN b";
    else
    cout << "b is GREATER THAN a";

    // <= Operator
    if(a <= b)
    cout << "a is LESS THAN b";
    else
    cout << "b is LESS THAN a";

    // != Operator
    if(a != b)
    cout << "a is NOT EQUAL to b";
    else
    cout << "EQUAL";

}