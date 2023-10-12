#include <iostream>
using namespace std;

// Fibonacci Series
int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i <= n-1; i++)
    arr[i] = arr[i-1] + arr[i-2]
    cout << arr[n-1] << " ";
}