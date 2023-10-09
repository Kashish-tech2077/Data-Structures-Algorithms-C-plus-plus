#include <iostream>
using namespace std;

int main()
{
    // Concept of Arrays Indexing
    int arr[9] = {3,6,7,2,79,31,56,93, 90};
    cout << arr[0] << endl; // Print the zero index value in arr[9]
    
    cout << arr[3] << endl; // Print the 3 index value in arr[9]

    cout << arr[7] << endl; // Print the 7 index value in arr[9]

    cout << arr[6] << endl; // Print the 6 index value in arr[9]

    // If We Want to print the value which is out of the array size
    cout << arr[35]; //Don't Do This! It will show the Garbage value.
}