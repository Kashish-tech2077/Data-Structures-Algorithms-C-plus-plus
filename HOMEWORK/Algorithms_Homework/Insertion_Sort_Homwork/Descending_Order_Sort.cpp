#include <iostream>
using namespace std;
// Homework- Sort in Descending Order using Insertion Sort Algorithm

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    // Input the array elements
    for(int i =0; i<n; i++)
    cin >> arr[i];

    for(int i = 1; i<n; i++)
    {
        int j;
        for(j = i; j>0; j--)
        {
            if(arr[j] > arr[j-1])
            swap(arr[j], arr[j-1]);
            else
            break;
        }
    }
    // Printing the Sorted Array
    for(int i = 0; i< n;i++)
    {
        cout << arr[i] << " ";
    }
    

}