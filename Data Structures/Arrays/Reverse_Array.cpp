#include <iostream>
using namespace std;

// Reversing the Integers
int main()
{
    // For Even Elements
    int arr[6] = {3, 6, 23, 56, 1, 63};
    int start = 0, end = 5 ;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i = 0; i < 6; i++)
    cout << arr[i] << ", ";
}