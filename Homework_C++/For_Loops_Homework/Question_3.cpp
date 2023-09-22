#include <iostream>
using namespace std;

// For Loop Example
int main(){
    // Question- 3: Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        
        if(i % 4 == 0){
            cout << "Divisible by 4 is: " << i <<endl;
        }

    }    
    
}