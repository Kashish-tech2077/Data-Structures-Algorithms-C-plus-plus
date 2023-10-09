#include <iostream>
using namespace std;

int main()
{
    // Concept of Arrays Input

    int size;
    cout << "Enter the size:  ";
    cin >> size;
    
    int arr[5000];
    for(int i = 0; i < size; i++)
    cin >> arr[i];

    // Printing the array
    for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
}