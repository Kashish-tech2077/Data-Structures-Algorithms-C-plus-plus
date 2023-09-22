#include <iostream>
using namespace std;

// Pattern to be printing
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << j << " ";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}