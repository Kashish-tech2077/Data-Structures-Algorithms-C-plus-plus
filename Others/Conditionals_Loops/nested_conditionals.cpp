#include <iostream>
using namespace std;

int main(void){
    int X, Y;
    cout << "Enter the Value of X: "; 
    cin >> X;
    cout << "Enter the Value of Y: "; 
    cin >> Y;

    // Using Nested conditions
    if(X > Y){
        cout << "X is Greater than Y";
    }
    else{
        if(X == Y){
            cout << "X and Y are EQUAL";
        }
        else{
            cout << "Y is greater than X" <<endl;
        }
    }
    return 0;
}