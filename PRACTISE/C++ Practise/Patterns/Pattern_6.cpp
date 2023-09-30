#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 6
    // 1 2 3 4 5
    // 6 7 8 9 10
    // 11 12 13 14 15 
    // 16 17 18 19 20
    // 21 22 23 24 25

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;
    int count = 1;

    for(row = 1; row <= n; row++){
        for(col = 1; col <= n; col++){
            cout << count << " ";
            count = count+1;
        }
        cout << endl;
    }
}