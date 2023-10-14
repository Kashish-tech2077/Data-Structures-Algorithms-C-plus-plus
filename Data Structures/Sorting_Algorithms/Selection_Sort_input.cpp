#include <iostream>
using namespace std;
// Selection Sort using input
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n; //Size of an Array
    cout << "Enter the elements of array: ";
    for(int i = 0; i<n; i++)
    cin >> arr[i];
    
    // Outer Loop from i = 0 to i = 4
    for(int i = 0; i<n-1; i++)
    {
        int index = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[index])
            index = j;
        }
        swap(arr[i], arr[index]);
    }
    // Print the sorted array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}