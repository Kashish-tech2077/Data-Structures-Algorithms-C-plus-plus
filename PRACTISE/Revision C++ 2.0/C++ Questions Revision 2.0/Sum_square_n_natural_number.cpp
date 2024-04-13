#include <iostream>
using namespace std;

int main()
{
    // Program of sum of square of n natural numbers
    int i, result, num;
    cout << "Enter the Number: ";
    cin >> num;
    result = 0;

    for(i = 1; i <= num; i++)
    {
        result = result + i*i;
    }
    cout << "The sum of square of " << num << " Natural numbers is: "<< result;

    return 0;
}