#include <iostream>
using namespace std;

// Binary Search Algorithm Function.

int BinarySearch(int arr[],int n,int key)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        // Mid
        mid = start + (end-start)/2;
        // arr[mid] == key
        if(arr[mid] == key)
        {
            return mid;
        }
        // arr[mid] < key 
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        // arr[mid] > key
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the Size of the Array: ";
    cin >> n;
    cout << "Enter the Elements in the Array: ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];

    // Key
    int key;
    cout << "Enter the Value to Search: ";
    cin >> key;

    cout << BinarySearch(arr, n, key); // Calling BinarySearch Function.

    return 0;
}