#include <iostream>
using namespace std;

int main(){
    // Question- 5: Print Sum of cube of first n natural number

    int n, k, cube;
    cout << "Enter the value of n: ";
    cin >> n;

    cube = 1;

    for(k = 1; k <= n; k++){
        cube = cube * k * k;
    }
    cout << "cube of " << n << " natural no. is " << cube;
}