#include <iostream>
using namespace std;

// Question- 4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. 

// Function of Swap Numbers
void Swap_Num(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    Swap_Num(a, b);

    cout << "Swapping Numbers:\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
