#include <iostream>
using namespace std;

// Find Second Maximum Element
int main()
{
    // First Finded Largest Element in the Array
    int arr[6] = {2,4,5,35,74,9};
    int ans = -1;
    for(int i = 0; i<5; i++){
        if (arr[i] > ans)
        ans = arr[i];
    }
    // Then, find the Second Largest Element
    int second = -1;
    int second_max;
    for(int i = 0; i<5; i++){
        // Check if ans != arr[i]
        if(ans != arr[i])
        second_max = max(second, arr[i]);
    }
    cout << second_max << " ";
}