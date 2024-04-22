#include <iostream>
using namespace std;

int main()
{
    // Bubble Sorting Algorithm in Decreasing Order.
    int arr[1000];
    int n;
    cout << "Enter the length of the Array: ";
    cin >> n;
    cout << "Enter the Elements in the Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Sorting in Descending Order Code.
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped == 0)
            break;
    }

    cout << "Descending Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}