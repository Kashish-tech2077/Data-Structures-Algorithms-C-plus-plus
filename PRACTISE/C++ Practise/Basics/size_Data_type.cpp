#include <iostream>
using namespace std;

int main(){
    // Program to find the size of Fundamental Data Types in C++ using "sizeof()" operator.

    int myNumber = 4;
    char ch = 'k';
    string name = "Kashish";
    bool say = true;
    float percentile = 99.89;
    double largeNumber = 235345.234643433;

    cout << "Size of myNumber is: " << sizeof(myNumber) << endl;
    cout << "Size of character ch is: " << sizeof(ch) << endl;
    cout << "Size of string name is: " << sizeof(name) << endl;
    cout << "Size of boolean say is: " << sizeof(say) << endl;
    cout << "Size of float percentile is: " << sizeof(float) << endl;
    cout << "Size of largeNumber ch is: " << sizeof(largeNumber) << endl;
}