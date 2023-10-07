#include <iostream>
using namespace std;

int DistributeCircle(int A, int B, int C)
{
    int n = (A + C - 1) % B;
    if (n == 0)
    {
        return B;
    }
    return n;
}

int main(){

    // Function Call
    cout << DistributeCircle(2, 5, 8);

}