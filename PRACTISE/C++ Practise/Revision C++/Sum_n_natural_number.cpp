#include <iostream>
using namespace std;

int main()
{
    // Program of sum of n natural numbers.

    // Method -> 1
    int num, result, i;
    cout << "Enter the Number: ";
    cin >> num;
    result = 0;
    
    for(i = 1; i <= num; i++)
    {
        result = result + i;
    }
    cout << "The sum of " << num << " Natural numbers is: "<< result;

    // Method -> 2
    // cout result = num*(num+1)/2
    
    return 0;
}