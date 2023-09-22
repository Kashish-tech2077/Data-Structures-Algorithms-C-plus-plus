#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a;
    cin >> b;

    // Condition to check that a is greater than b or not
    if(a > b){
        cout << "a is greater than b\n";
    }
    else{
        cout << "b is greater than a\n";
    }
    return 0;
}