#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 15
    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = n; col >= n-(row-1); col--){
           cout << col << " ";
        }
        cout << endl;
    }
}