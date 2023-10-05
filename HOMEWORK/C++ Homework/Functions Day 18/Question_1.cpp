#include <iostream>
using namespace std;

// Question- 1: Find the cube of a number using Function.

// Cube Function
int Cube(int k)
{
    int cube = k * k * k;
    return cube;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << Cube(n);
}
