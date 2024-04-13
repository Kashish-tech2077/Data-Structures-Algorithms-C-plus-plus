#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10,8,2,3,1,4};
    // Outer Loop from i = 0 to i = 4
    for(int i = 0; i<5; i++)
    {
        int index = i;
        for(int j = i+1; j<6; j++)
        {
            if(arr[j] < arr[index])
            index = j;
        }
        swap(arr[i], arr[index]);
    }
    // Print the sorted array
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}