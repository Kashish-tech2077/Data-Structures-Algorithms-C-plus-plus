#include <iostream>
using namespace std;

// Problem Statement: You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int countFlippedBits(int A, int B) {
    int XOR = A ^ B; // Get the bits that are different
    return countSetBits(XOR);
}

int main() {
    int A = 10, B = 20;
    int result = countFlippedBits(A, B);
    cout << "Number of bits needed to be flipped: " << result << endl;
    return 0;
}
