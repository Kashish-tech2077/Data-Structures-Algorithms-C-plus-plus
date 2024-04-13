#include <iostream>
using namespace std;

int main()
{
    // Rotating an array by 1;
    int array[7] = {2, 7, 4, 11, 5, 8};
    cout << "Original Array: {2, 7, 4, 11, 5, 8}" << endl;

    int temp = array[6 - 1];  // (n - 1)
    
    for(int i = 6-2; i >= 0; i--)
    {
        array[i + 1] = array[i];
    }
    array[0] = temp;
    
}