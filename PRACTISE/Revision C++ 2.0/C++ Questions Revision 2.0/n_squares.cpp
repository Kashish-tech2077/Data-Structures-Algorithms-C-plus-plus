#include <iostream>
using namespace std;

int main()
{
    // Program to print n squares of number;
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    for(int num_sqr = 1; num_sqr <= n; num_sqr++){
        cout << num_sqr << " Square is: " << num_sqr*num_sqr << endl;
    }
    return 0;
}