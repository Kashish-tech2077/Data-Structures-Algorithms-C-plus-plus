#include <iostream>
using namespace std;

// Function (Sum)
int Sum(int p, int q)  //Function Parameters.
{
    // Defining Functions.
    int ans = p + q;
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // Function Call
    cout << Sum(a, b);
}