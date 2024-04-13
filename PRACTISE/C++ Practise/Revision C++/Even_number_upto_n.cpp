#include <iostream>
using namespace std;

int main()
{
    // Program to print all EVEN NUMBERS upto n;

    // Method 1 using for-loop
    // int n;
    // cout << "Enter the n: ";
    // cin >> n; 
    // for(int num_even = 2; num_even <= n; num_even = num_even+2)
    // {
    //     cout << " "<< num_even << endl;
    // }

    // Method 2 using for-loop
    int n_2;
    cout << "Enter the n_2: ";
    cin >> n_2;
    for(int i =1; i <= n_2; i++)
    {
        if(i%2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}