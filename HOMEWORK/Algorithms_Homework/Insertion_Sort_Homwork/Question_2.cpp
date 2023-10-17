#include <iostream>
using namespace std;
// Homework-2 - Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. Question was explained in the class.m

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    // Input the array elements
    for(int i =0; i<n; i++)
    cin >> arr[i];

    for(int i = n-1; i>0; i--)
    {
        int j;
        for(j = i; j<n; j++)
        {
            if(arr[j] < arr[j-1])
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