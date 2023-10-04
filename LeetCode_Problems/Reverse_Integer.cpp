#include <iostream>
using namespace std;

int main()
{
        int x= 234;
        int rem, ans = 0;
        while (x != 0)
        {
            rem = x % 10;
            x /= 10;
            // if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
            // {
            //     return 0;
            // }
            ans = ans * 10 + rem;
        }
        cout << ans;
    }