#include <iostream>
using namespace std;

int main(){
    // Question- 5: Print Sum of square of first n natural number

    int n, k, square;
    cout << "Enter the value of n: ";
    cin >> n;

    square = 1;

    for(k = 1; k <= n; k++){
        square = square * k;
    }
    cout << "Square of " << n << " natural no. is " << square;
}