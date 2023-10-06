#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Count (int n)
{
    int count;
    while(n)
    {
        count = 0;
        count++;
        n / 10;
    }
    return count;
}

bool Armstrong(int num, int power)
{
    int n = num, ans = 0, rem;
    while(n)
    {
        rem = n%10;
        n /= 10;
        ans = ans + pow(rem, power);
    }
    if(ans == num)
    return true;
    else
    return false;
}
int main()
{
    int num;
    cout << "Enter Number to Check Armstrong: ";
    cin >> num;

    int power = Count(num);
    cout << Armstrong(num, power) << endl;

    return 0;
}