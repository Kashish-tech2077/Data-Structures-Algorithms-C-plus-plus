#include <iostream>
using namespace std;

// Bubble Sorting Algorithm.
int main()
{
    int arr[1000];
    int n; // Length of the Array.
    cout << "Enter the length of the Array: ";
    cin >> n;
    cout << "Enter the Elements of the Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = 0;  //Initialize swapped with 0.
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(swapped == 0)// If swapped is 0, i.e the array is already sorted.
        break; // Therefore break the loop.
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) //Printing the Sorted Array.
        cout << arr[i] << " ";
}