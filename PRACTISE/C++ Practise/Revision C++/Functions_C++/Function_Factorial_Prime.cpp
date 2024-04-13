#include <iostream>
using namespace std;

// Check Prime Function.
bool Prime(int n)
{
    if(n < 2)
    return 0;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        return 0;
    }
    return 1;
}

int Factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    int a, b;
    cout << "Enter the Numbers: ";
    cin >> a >> b;

    // A is Prime or Not?
    cout << Prime (a) << endl;
    // Factorial of A.
    cout << Factorial(a) << endl;
    // B is Prime or Not?
    cout << Prime(b) << endl;
    // Factorial of B.
    cout << Factorial(b) << endl;
    // B-A Prime or Not?
    cout << Prime(b-a) << endl;
    // Factorial of B-A. 
    cout << Factorial(b-a) << endl;
}