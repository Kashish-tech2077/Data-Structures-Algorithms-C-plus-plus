#include <bits/stdc++.h>
using namespace std;

// Looping through Arrays with for loop

int main()
{
    string companies[5] = {"Meta", "Google", "Apple", "Microsoft", "Amazon"};

    // For Loop for accessing the elements of arrays
    for(int i = 0; i <= 4; i++){
        cout << companies[i] << endl;        
    }

    // Alternative
    for(int k = 0; k < 5; k++){
        cout << k << "(index)-> " << companies[k] << "\n";
    }
}