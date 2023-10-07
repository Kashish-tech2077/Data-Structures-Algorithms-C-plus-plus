#include <iostream>
using namespace std;

// Question- Count Number of 1 Bits
int count1(int K)
{
    int ans = 0, rem, mul = 1, count = 0;
    while (K)
    {
        rem = K % 10;
        if (rem == 1)
        {
            count += 1;
        }
        K = K / 10;
    }
    return count;
}

int Bin(int N)
{
    int ans = 0, rem, mul = 1;
    while (N)
    {
        rem = N % 2;
        N = N / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    return ans;
}
int main()
{
    int K = 31;
    int Binary = Bin(K);
    cout << Bin(K);

    // Function Call
    cout << "\n"
         << "Total One: " << count1(Binary) << endl;
}

Optimized Code (Geeks for Geeks)
int count = 0; // initializing count variable to 0
while (N) {
    N &= (N - 1); // with this operation, we remove the rightmost set bit in N and increment the count
    count++; // incrementing the count variable by 1
}
return count;