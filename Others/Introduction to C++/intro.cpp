#include<iostream>
using namespace std;

int main(){

    cout << "Hello World \n"; //Printing in C++
    int myNum = 65;
    int mySecondNum = 453;
    cout << myNum+mySecondNum; //Adding two numbers in C++

    // Data Types in C++
    int myinteger = 23; //Integer
    cout << myinteger << endl;

    float floating = 56.8; //Float
    cout << floating << endl;

    double double_num = 32.64; //Double Data Type
    cout << double_num << endl;

    char ch = 'k'; //Char
    cout << ch << endl;

    // Printing Sizes of all Data Types
    cout << "Size of an Integer " << sizeof(myinteger) << endl; //Integer size -> 4 Bytes
    cout << "Size of an float " << sizeof(floating) << endl; //Integer size -> 4 Bytes
    cout << "Size of an char " << sizeof(ch) << endl; //Integer size -> 4 Bytes
    cout << "Size of an double " << sizeof(double_num) << endl; //Integer size -> 4 Bytes

    // TypeCasting
    int a = 'a';
    cout << a << endl;

    char ch2 = 98;
    cout << ch2 << endl; 
}