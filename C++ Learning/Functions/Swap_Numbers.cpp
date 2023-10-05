#include <iostream>
using namespace std;

void Swap (int &a, int &b) //Pass by Refrence
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;
    cin >> a >> b;
    Swap(a, b);
    cout << "a= " << a <<endl;
    cout << "b= " << b <<endl;
}