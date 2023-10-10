#include <iostream>
using namespace std;

// Search Element Code
int main()
{
    int arr[5] = {10, 20, 7, 11 ,8};
    int index = -1; 
    int X = 7;
    for(int i = 0; i < 5; i++)
        {
            if(arr[i]== X)
            {
                return i;
            }
        }
            return -1;
        
    cout << index;
}