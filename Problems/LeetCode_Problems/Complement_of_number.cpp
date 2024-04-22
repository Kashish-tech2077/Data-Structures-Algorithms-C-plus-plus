#include <iostream>
using namespace std;

int main()
{
    int n = 24;
    if (n == 0)
    {
        return 1;
    }
    int rem, ans = 0, mul = 1;
    while (n)
    {
        rem = n % 2;
        rem = rem ^ 1;
        n /= 2;
        ans = ans + rem * mul;
        mul *= 2;
    }
    return ans;
}
