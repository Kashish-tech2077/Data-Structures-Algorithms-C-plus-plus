#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 3
    // 5 4 3 2 1 
    // 5 4 3 2 1 
    // 5 4 3 2 1 
    // 5 4 3 2 1 
    // 5 4 3 2 1 

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = 5; col >= 1; col--){
            cout << col << " ";
        }
        cout << endl;
    }
}