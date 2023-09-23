#include <iostream>
using namespace std;

int main(){
    // Question- 2: Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age > 18){
        cout << "Adult";
    }
    else{
        cout << "Teenager";
    }
}