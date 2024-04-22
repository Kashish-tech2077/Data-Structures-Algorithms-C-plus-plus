#include <iostream>
using namespace std;

// Selection Sort Algorithm Method -2

int main()
{
    int arr[1000];
    int n; // Size of an Array.
    cout << "Enter the Array Size: ";
    cin >> n;
    cout << "Enter the elements of an Array: ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];  // User enters the Elements of the Array.

    cout << endl;

    for (int i = n - 1; i > 0; i--)
    {
        int index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[index])
                index = j;
        }

        swap(arr[i], arr[index]); // Swapping the value of Array.
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Printing the Array after Sorting.
    }
}