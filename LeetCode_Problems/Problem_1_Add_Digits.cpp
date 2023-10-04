#include <iostream>
using namespace std;

int main(){
    // Problem- Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

    int num;
    num = 23;
    int rem, ans = 0;

    while(num > 9){
        while(num != 0){
            rem = num % 10;
            num /= 10;
            ans += rem;
        }
        num = ans;
    }
    // return num;
    cout << num;
}