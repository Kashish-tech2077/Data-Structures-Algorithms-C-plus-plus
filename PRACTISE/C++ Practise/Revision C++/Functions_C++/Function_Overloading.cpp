#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void Swap(float &m, float &n) // FUNCTION OVERLOADING.
{
    float o;
    o = m;
    m = n;
    n = o;
}

int main()
{
    int a, b;
    cout << "Enter Numbers: ";
    cin >> a >> b;

    Swap(a, b);
    cout << a << " " << b << endl;
    
    float m = 6.75, n = 3.25;
    Swap(m, n);
    cout << m << " " << n;
}