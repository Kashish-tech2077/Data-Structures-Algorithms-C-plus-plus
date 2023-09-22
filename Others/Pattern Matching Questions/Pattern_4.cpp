#include <iostream>
using namespace std;

// Pattern to be printing
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1

int main(void)
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j<=n){
            cout <<n-j+1 << " ";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
    return 0;
}