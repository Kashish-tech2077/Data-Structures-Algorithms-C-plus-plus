#include <iostream>
using namespace std;

int main()
{
    // SCOPE of a Variable

    int a = 20;

    cout << a;

    int a = 30;  //NOT ALLOWED Because It is in the SAME BLOCK.

    {
        int a = 46;  //ALLOWED Because It is in DIFFERENT BLOCK.
    }
}