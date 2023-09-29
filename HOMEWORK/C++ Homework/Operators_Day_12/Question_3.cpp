#include <iostream>
using namespace std;

int main(){
    // HomeWork Question- 3:  Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

    int Age;
    cout << "Enter your age: ";
    cin >> Age;

    // You are Teenager or not??
    if(Age >= 13 && Age <= 19){
        cout << "You are TEENAGER!";
    }
    else{
        cout << "You are NOT TEENAGER!";
    }
}