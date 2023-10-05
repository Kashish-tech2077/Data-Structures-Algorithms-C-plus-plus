#include <iostream>
using namespace std;

// Question- 6: Given two numbers n, r. Find nCr (Combination). Use Function here. 
// Formula of nCr is: n! / r!n-r!

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
int nCr_Func(int n, int r) {
    int fac_n = factorial(n);
    int fac_r = factorial(r);
    int fac_n_r = factorial(n - r);

    int nCr = fac_n / (fac_r * fac_n_r);
    return nCr;
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    if (n >= r && n >= 0 && r >= 0) {
        cout << nCr_Func(n, r);
    } else {
        cout << "Invalid input. Please ensure n >= r >= 0.";
    }

    return 0;
}
