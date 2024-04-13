#include <iostream>
using namespace std;

// Swap Function
// int Swap(int a, int b)  //Pass by Value
int Swap(int &a, int &b)  //Pass by Reference
{
    // Defining Functions
    int c;
    c = a;
    a = b;
    b = c; 

}

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // Function Call
    Swap(a, b);
    cout << a << " " << b;
}