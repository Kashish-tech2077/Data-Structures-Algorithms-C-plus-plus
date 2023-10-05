#include <iostream>
using namespace std;

void Incr(int &n){
    n++;
}

int main()
{
    int a = 10;
    Incr(a);
    cout << a << endl;
}