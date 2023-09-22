#include <iostream>
using namespace std;

int main(){
    // Question- 7: Program to Print n'th Fibonacci Series.
    
    int n, i, last = 0, previous = 1, current = 0;
    cout << "Enter the n: ";
    cin >> n;

    cout << "Fibonacci Series is: ";

    for(i = 1; i <= n; ++i){
        
        if(i == 1){
            cout<< 0 << " ";
            continue;
        }
        if(i == 2){
            cout << 1 << " ";
            continue;
        }
        
        current = previous + last;
        last = previous;
        previous = current;

        cout << current << ", ";
    } 
    return 0; 
}