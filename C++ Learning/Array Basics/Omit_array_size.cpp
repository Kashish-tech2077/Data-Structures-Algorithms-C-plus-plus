#include <bits/stdc++.h>
using namespace std;

int main()
{
    // In C++, you don't have to specify the size of the array. The compiler is smart enough to determine the size of the array based on the number of inserted values:

    string cars[] = {"Volvo", "Audi", "Mercedes", "Lemborghini", "Ferrari", "Tesla"};

    for(int i = 0; i < 6; i++){
        cout << cars[i] << endl;
    }

    // Omit Elements on Declaration. It is also possible to declare an array without specifying the elements on declaration, and add them later:

    string Companies[3];
    Companies[0]= "Google";
    Companies[1]= "Facebook";
    Companies[2]= "Paytm";
    
    cout << Companies[0] <<endl;
    cout << Companies[1] <<endl;
    cout << Companies[2] <<endl;
}