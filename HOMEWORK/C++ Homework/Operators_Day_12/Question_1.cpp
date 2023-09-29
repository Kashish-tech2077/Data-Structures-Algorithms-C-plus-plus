#include <iostream>
using namespace std;

int main(){
    // HomeWork Question- 1:  Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.

    int tempreture;
    cout << "Enter tempreture to check for swimming: ";
    cin >> tempreture;

    // Tempreture Check suitable for Swimming
    if(tempreture > 70 && tempreture < 90){
        cout << "yes";
    }
    else{
        cout << "no";
    }
}