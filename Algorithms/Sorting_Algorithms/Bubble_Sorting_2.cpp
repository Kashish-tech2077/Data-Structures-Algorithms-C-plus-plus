#include <iostream>
using namespace std;

int main()
{
    // Bubble Sorting the Array from Right to Left.
    int arr[1000];
    int n;
    cout << "Enter the length of the Array: ";
    cin >> n;
    cout << "Enter the Elements in the Array: ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];

    for(int i = 1; i < n; i++)
    {
        bool swapped = 0;
        for(int j = n - 1; j >= i; j--)
        {
            if(arr[j - 1] > arr[j])
            {
                swapped = 1;
                swap(arr[j - 1], arr[j]);
            }
        }
        if(swapped = 0)
        break;
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
}