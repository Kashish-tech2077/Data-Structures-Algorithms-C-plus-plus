#include <iostream>
using namespace std;

int main(void){
    int a = 5;
    int b = a + 1;

    if((a = 6) == b){
        cout << "a is equal to b";
    }
    else{
        cout << a+1;
    }
    return 0;
}