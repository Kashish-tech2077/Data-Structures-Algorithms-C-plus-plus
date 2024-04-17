#include <iostream>
using namespace std;

// Insertion Sorting Algorithm from Right to Left.

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the Size of the Array: ";
    cin >> n;
    cout << "Enter the Elements in the Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << endl;

    // Insertion Sorting Algorithm Code.
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            else
            {
                break;
            }
        }
    }

    // Printing Sorted Array.
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}