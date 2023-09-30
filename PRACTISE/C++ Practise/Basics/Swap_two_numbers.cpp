#include <iostream>
using namespace std;

int main(){
    // Program to swap two numbers

    cout << "Swapping two numbers program:- ";
    int x = 20;
    int y = 30;
    int temp;

    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    
    temp = y;
    y = x;
    x = temp;
    cout << "After Swapping: " <<endl;
    cout << "x = " << x <<endl;
    cout << "y = " << y;

}