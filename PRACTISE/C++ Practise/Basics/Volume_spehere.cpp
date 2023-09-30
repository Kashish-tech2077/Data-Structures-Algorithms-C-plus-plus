#include <iostream>
using namespace std;

int main(void){
    // Program to calculate the volume of sphere Formula: V = 4/3*pi*r^3;

    int radius, volume, pi = 3.14;
    cout << "Enter the radius of spehere: ";
    cin >> radius;

    volume = 4/3*(pi*radius*radius*radius);

    cout << "The volume of radius " << radius << " is " << volume;
}