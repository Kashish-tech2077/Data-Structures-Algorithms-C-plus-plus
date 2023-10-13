#include <iostream>
using namespace std;

int main()
{
    int array[7] = {2,3,4,5,6,7,8};
    cout << "Normal Array: ";
    for(int k = 0; k <= 6; k++)
    cout << array[k] << " ";
    cout << endl;

    int n = 7;
    int temp = array[n-1];

    // Rotating the Array
    for(int i = n-2; i >= 0; i--)
    array[i+1] = array[i];

    // Assigning the temp value in array[0]
    array[0]= temp;

    cout << "Rotated Array: ";
    for(int k = 0; k <= 6; k++)
    cout << array[k] << " ";
}