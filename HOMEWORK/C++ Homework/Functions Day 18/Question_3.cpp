#include <iostream>
using namespace std;

// Question- 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

// Swap Three Numbers Function
void Swap_Num(int &a, int &b, int &c){
    int temp = a;
    a = c;
    c = b;
    b = temp;
}

int main(){
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    Swap_Num(a, b, c);

    cout << "Swapping Numbers:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
    
}