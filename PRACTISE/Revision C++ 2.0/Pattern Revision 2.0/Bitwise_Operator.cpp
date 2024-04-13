#include <iostream>
using namespace std;

int main()
{
    // Bitwise Operator

    // & (AND) Operator
    int a_1, b_1;
    a_1 = 2, b_1 = 3;
    int output_1 = a_1 & b_1;
    cout << "2 AND 3 = " << output_1 << endl;

    // | (OR) Operator
    int a_2, b_2;
    a_2 = 2, b_2 = 3;
    int output_2 = a_2 | b_2;
    cout << "2 OR 3 = " << output_2 << endl;

    // ^ (XOR) Operator
    int a_3, b_3;
    a_3 = 2, b_3 = 3;
    int output_3 = a_3 ^ b_3;
    cout << "2 XOR 3 = " << output_3 << endl;

    // >> Right Shift Operator
    int a_4, b_4;
    a_4 = 2, b_4 = 3;
    int output_4 = a_4 >> b_4;
    cout << "2 >> 3 = " << output_4 << endl;

    // << Left Shift Operator
    int a_5, b_5;
    a_5 = 2, b_5 = 3;
    int output_5 = a_5 << b_5;
    cout << "2 << 3 = " << output_5 << endl;

    // ~ Complement Operator
    int c;
    c = 13;
    int output_6 = ~c;
    cout << "Complement of 13: " << output_6;
}