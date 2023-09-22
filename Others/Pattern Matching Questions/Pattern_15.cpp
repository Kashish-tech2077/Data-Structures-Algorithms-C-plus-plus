#include <iostream>
using namespace std;

// Output A B C D
//        B C D E
//        C D E F
//        D E F G
//        E F G H
int main(){
    int k;
    cout << "Enter k: ";
    cin >> k;
    int i = 1;
    while(i <= k){
        int j = 1;
        while(j <= k){
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}