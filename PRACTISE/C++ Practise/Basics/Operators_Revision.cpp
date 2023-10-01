#include <iostream>
using namespace std;

int main(){
    // Question- Write a program to tell "You Can Drive!" if the age is greater than 18 and less than 60 (Inclusive).

    int age;
    cout << "Enter your Age: ";
    cin >> age;

    if(age >= 18 && age <= 60){
        cout << "--------You Can Drive!--------";
    }
    else{
        cout << "-------You Cannot Drive.-------";
    }
    return 0;
}