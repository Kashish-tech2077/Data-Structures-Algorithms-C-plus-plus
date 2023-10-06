#include <iostream>
using namespace std;

// Program to Calculate Total Moves in Bishop in CHESS!
int Bishop_Moves(int A, int B) {
    int count = 0;
    
    count += min(8 - A, 8 - B);
    count += min(8 - A, B - 1);
    count += min(A - 1, B - 1);
    count += min(A - 1, 8 - B);
    
    return count;
}

int main()
{
    int A, B;
    cout << "Enter A and B: ";
    cin >> A >> B;

    // Function Call
    cout << Bishop_Moves(A, B) << endl;
}