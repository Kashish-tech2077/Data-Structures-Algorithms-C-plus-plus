#include <iostream>
using namespace std;

// Sort the array in descending order 

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the Elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Outer Loop
    for(int i = n-2; i>=0; i--)
    {
        bool swapped = 0;
        for(int j = 0; j<=i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                swapped = 1; 
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped ==0)
        break;
    }
    // Print the loop
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}