#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int a, b;
    cout << "Enter Numbers: ";
    cin >> a >> b;

    swap(a, b);  // Inbuilt Function (swap is inbuilt function)
    cout << a << " " << b << endl;
    
    int num = 25;
    int square = sqrt(num); //SQRT inbulit function for finding square root.
    cout << square;
}