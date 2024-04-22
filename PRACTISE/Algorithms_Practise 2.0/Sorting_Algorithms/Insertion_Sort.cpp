#include <iostream>
using namespace std;

// Insertion Sorting Algorithm.
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    cout << "Enter the Elements in Array: ";
    for (int i = 0; i < n; i++)
    cin >> arr[i];

    cout << endl;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}