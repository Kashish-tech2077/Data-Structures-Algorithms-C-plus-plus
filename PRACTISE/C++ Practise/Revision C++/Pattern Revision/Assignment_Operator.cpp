#include <iostream>
using namespace std;

int main()
{
    // Assignment Operator

    int a = 7;
    a += 9;  // a = a + 9
    cout << "a+=9 : "<< a;
    cout << endl;

    int b = 25;
    b -= 6;  // b = b - 25
    cout << "b-=6 : "<< b;
    cout << endl;

    int c = 21;
    c *= 2;  // c = c * 8
    cout << "c*=2 : "<< c;
    cout << endl;

    int d = 30;
    d /= 5;  // d = d / 5
    cout << "d/=5 : "<< d;
    cout << endl;
}