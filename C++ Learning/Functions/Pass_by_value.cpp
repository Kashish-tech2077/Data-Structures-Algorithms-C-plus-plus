#include <iostream>
using namespace std;

void Incr(int n) //Pass by Value
{
    n++;
}

int main()
{
    int a = 10;
    Incr(a);
    cout << a << endl;
}