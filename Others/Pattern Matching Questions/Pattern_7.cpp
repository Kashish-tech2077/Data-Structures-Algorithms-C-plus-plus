#include <iostream>
using namespace std;

// Output 1
//        2 2
//        3 3 3
//        4 4 4 4 
//        5 5 5 5 5
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i = 1;
    while(i <= n){
        int column = 1;
        while (column <= i){
            cout << i << " ";
            column = column + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}