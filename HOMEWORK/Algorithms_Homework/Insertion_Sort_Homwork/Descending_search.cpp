#include <iostream>
using namespace std;
// Homework of Descending Binary Search

// Binary Search Function
int Binary_Search(int arr[], int n,int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        // arr[mid] == key
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        // arr[mid] < key
        else if (arr[mid] < key)
        {
            end = mid - 1;
        }
        // arr[mid] > key
        else
        {
           start = mid + 1;
        }
    }

    return -1;
}
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    // Input the array elements in Descending Order
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Entering the key
    int key;
    cout << "Enter the key: ";
    cin >> key;

    cout << Binary_Search(arr, n, key);
    return 0;
}