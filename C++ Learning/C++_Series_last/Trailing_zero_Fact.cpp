#include <iostream>
using namespace std;

int trailingZeroes(int N)
{
    int count = 0;
    while (N >= 5)
    {
        count += N / 5;
        N /= 5;
    }
    return count;
}
int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    // Function Call
    cout << trailingZeroes(N);
}