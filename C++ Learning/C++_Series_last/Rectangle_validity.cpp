#include <iostream>
using namespace std;

// Program to check Rectangle is Valid or Not?

int Solution(int &A, int &B, int &C, int &D) {

    if((A == B && C == D)||(A == C && B == D)||(A == D && B == C))
    {
        return 1;
    }    
    else
    {
        return 0;
    }
}

int main()
{
    int A, B, C, D;
    cout << "Enter A, B, C, D: " << endl;
    cin >> A, B, C, D;
    cout << Solution(A, B, C, D);
}