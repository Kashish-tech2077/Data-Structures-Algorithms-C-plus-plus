#include <iostream>
using namespace std;

int main()
{
    // Fibonacci Series Using Arrays.
    int N;
    cout << "Enter the N: ";
    cin >> N;

    int array[1000];

    // First Element;
    array[0] = 0;
    
    // Second Element;
    array[1] = 1;

    for(int i = 2; i <= N-1; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }

    cout << array[N-1];
}