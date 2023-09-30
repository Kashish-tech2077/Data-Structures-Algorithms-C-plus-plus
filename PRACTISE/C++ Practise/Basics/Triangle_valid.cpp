#include <iostream>
using namespace std;

int main(){
    // Program to check whether the triangle is valid or not??
    // Validity of Trianlge - a+b > c and a + c > b and b+c > a

    int side_1, side_2, side_3;
    cout << "Enter the side 1 of triagle: ";
    cin >> side_1;
    cout << "Enter the side 2 of triagle: ";
    cin >> side_2;
    cout << "Enter the side 3 of triagle: ";
    cin >> side_3;

    //I am using Logical operator here (and(&&) , or(||), not(!))
    if(side_1 + side_2 > side_3 && side_1 + side_3 > side_2 && side_2 + side_3 > side_1){  
        cout << "The Triangle is VALID";
    }
    else{
        cout << "The Triangle is not VALID";
    }
    
}