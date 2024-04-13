#include <iostream>
using namespace std;

int main()
{
    // Program to print the table of n;
    int n,tbl;
    cout << "Enter the n: ";
    cin >> n;

    for(tbl = 1; tbl <= 10; tbl++)
    {
        cout << n << " X " << tbl << " = " <<n*tbl << endl;  
    }
    return 0;
}