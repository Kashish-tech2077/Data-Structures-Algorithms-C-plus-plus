#include <iostream>
using namespace std;

int main()
{
    // While Loop intro

    int i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    // Table of n using while loop
    int num;
    cout << "Enter the number: ";
    cin >> num;

    while(i <= 10){
        cout << i*num << endl;
        i++;
    }
    
    return 0;
}



