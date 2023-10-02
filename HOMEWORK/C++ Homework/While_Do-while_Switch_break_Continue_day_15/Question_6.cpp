#include <iostream>
using namespace std;

int main(){
    // Question 6-  Give a number n, find if it is prime or not, use a while loop and break here to solve it.

    int i = 2, n;
    cout << "Enter n: ";
    cin >> n;

    while(i < n){

        if(n % i == 0){
            cout << "Not Prime";
            break;
        }
        else{
            cout << "Prime";
            break;
        }
        i++;

    }
}