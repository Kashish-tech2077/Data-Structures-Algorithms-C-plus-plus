#include <iostream>
using namespace std;

int main(){
    // Question 3- Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here

    int i, n;
    cout << "Enter n: ";
    cin >> n;

    for(i = 1; i <= n; i++){

        if(i % 3==0 || i % 5==0)
        continue;

        cout << i << "\n";

    }
    return 0;
}