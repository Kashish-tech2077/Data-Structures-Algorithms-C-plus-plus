#include <iostream>
using namespace std;

int main()
{
    // CONTINUE Statement Program.

    int i, n;
    cout << "Enter n: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        if(i % 4 == 0)  //Whenever 'i' will divide 4 then that statement will be skipped and loop will move forward. 
        continue;

        cout << i << " ";
    }

    return 0;
}