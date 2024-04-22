#include <iostream>
using namespace std;

// Insertion Sorting Algorithn in Decreasing Order.

int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of the Array: ";
    cin >> n;
    cout << "Enter the Elements in the Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << endl;

    // Insertion Sort Algorithm Code.
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                // For Decreasing Order Sorting.
                swap(arr[j], arr[j - 1]);
            }

            else
            {
                break;
            }
        }
    }

    cout << "Sorted Array (Descending Order): ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}