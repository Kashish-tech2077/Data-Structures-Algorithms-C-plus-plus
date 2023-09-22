#include <iostream>
using namespace std;

int main(){
    int Fahrenheit;
    cout << "Enter Fahrenheit: ";
    cin >> Fahrenheit;
    float celcius;
    celcius = (5.0/9)*(Fahrenheit - 32);
    cout << Fahrenheit << " = " << celcius << " Degree C" << endl;
    return 0;
}