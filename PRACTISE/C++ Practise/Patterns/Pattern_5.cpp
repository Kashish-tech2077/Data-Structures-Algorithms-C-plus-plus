#include <iostream>
using namespace std;

int main(){
    // Pattern Practise 5
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e 

    int row, col, n;
    char ch;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(ch = 'a'; ch <= 'a'+ (n-1); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}