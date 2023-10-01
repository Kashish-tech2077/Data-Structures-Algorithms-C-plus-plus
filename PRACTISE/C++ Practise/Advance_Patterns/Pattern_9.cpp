#include <iostream>
using namespace std;

int main(){
    // Advance Pattern- 9 Practise
    //         A
    //       A B C
    //     A B C D E
    //   A B C D E F G
    // A B C D E F G H I

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        // Print spaces
        for(int j = 0; j < n-i-1; j++){
            cout << "  ";
        }

        // Print characters
        char ch = 'A';
        for(int j = 0; j < 2*i+1; j++){
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
    return 0;
}
