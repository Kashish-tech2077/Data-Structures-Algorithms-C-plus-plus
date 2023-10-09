#include <iostream>
using namespace std;

// Array Initialization Methods
int main()
{
    // Method 1
    int arr[6] = {1, 2, 3, 4, 5}; //Array Declaration
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    // Method 2
    int arr2[] = { 3,7, 8, 345,243};
    for(int i1 = 0; i1 < 5; i1++){
        cout << arr2[i1] << " ";
    }

    // Method 3
    int arr3[10] = { 3,7, 8, 345,243};
    for(int i2 = 0; i2 < 10; i2++){
        cout << arr3[i2] << " ";
    }

    // User Input
    int arr4[5];
    // Input the Arrays
    for(int i3 = 0; i3 < 5; i3++)
    {
        cin >> arr4[i3];
    }

    // Printing the Arrays
    for(int i4=0; i4<5; i4++)
    cout << arr4[i4] << " ";
    
    return 0;

}