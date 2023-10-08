#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Size of array and looping through it...
    int myNumbers[5] = {1, 2, 3, 4, 5};
    cout << sizeof(myNumbers) << endl;

    // Why did the result show 20 instead of 5, when the array contains 5 elements?

    // It is because the sizeof() operator returns the size of a type in bytes.

    // You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

    // Loop Through an Array with sizeof()
    for(int i = 0; i < sizeof(myNumbers) / sizeof(int); i++){
        cout << myNumbers[i] << endl;
    }
}
