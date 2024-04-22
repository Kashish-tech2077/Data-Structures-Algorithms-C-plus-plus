#include <iostream>
using namespace std;

// Printing Arrays using Functions.
void fun(int arr[], int n)
{
    cout << "Size of Pointer: " << sizeof(arr) << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int array[5] = {2, 8, 7 ,6 ,9};
    cout << "Size of Array: " <<  sizeof(array) << endl;
    fun(array, 5);  //Function Call to Print Elements of an Array.
}