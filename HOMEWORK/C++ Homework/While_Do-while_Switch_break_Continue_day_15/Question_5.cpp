#include <iostream>
using namespace std;

int main(){
    // Question 5-  Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

    // First Print A - Z (Capital Letters)
    char ch_Upper = 'A';

    while(ch_Upper <= 'Z'){

        cout << ch_Upper << " ";
        ch_Upper++;

    }

    cout << endl;
    
    // Print a - z (Small Letters)
    char ch_lower = 'a';

    while(ch_lower <= 'z'){

        cout << ch_lower << " ";
        ch_lower++;

    }
}