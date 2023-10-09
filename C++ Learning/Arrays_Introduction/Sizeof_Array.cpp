#include <iostream>
using namespace std;

int main()
{
    // Concept of sizeof() in Array

    int arr[5] = {6, 7,2,3,3};
    cout << sizeof(arr[5]) << endl; //Size of arr[5] which is 4 bytes
    cout << sizeof(arr) << endl; //Size of arr which is 20 bytes

    // Find how many Elements are in Array
    cout << sizeof(arr)/sizeof(arr[0]);
}