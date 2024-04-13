#include <iostream>
using namespace std;

int main()
{
    // BREAK Statement Program.

    int i = 1, n;
    cout << "Enter n: ";
    cin >> n;

    while(i <= n)
    {
        if(i == 4)
        break; //when i will be equal to 4 then the Loop will BREAK.

        cout << i << " ";
        i++;
    }

    return 0;
}