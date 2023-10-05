#include <iostream>
using namespace std;

void Swap (int &a, int &b) //Pass by Refrence
{
    int c;
    c = a;
    a = b;
    b = c;
}

void Swap (float &c, float &d) //Function OverLoading(Have Same Function name)
{
    float r = c;
    c = d;
    d = r;
}

int main()
{
    int a, b;
    cin >> a >> b;
    Swap(a, b);
    cout << "a= " << a <<endl;
    cout << "b= " << b <<endl;

    int c, d;
    cin >> c >> d;
    Swap(c, d);
    cout << "c= " << c << endl;
    cout << "d= " << d << endl;
}