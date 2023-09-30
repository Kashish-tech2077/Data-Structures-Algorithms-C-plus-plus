#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 10
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1
    // 6 5 4 3 2 1

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = row; col >= 1; col--){
           cout << col << " ";
        }
        cout << endl;
    }
}