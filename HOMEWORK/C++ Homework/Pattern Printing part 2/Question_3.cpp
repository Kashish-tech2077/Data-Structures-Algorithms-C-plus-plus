#include <iostream>
using namespace std;

int main(){
    // Question 3- Third Pattern:
       
    //   10
    //   10 11
    //   10 11 12
    //   10 11 12 13
    //   10 11 12 13 14
    //   10 11 12 13 14 15



    int row, col;
    char ch;

    for(row = 10; row <= 15; row++){
        for(col=10; col <= row; col++){
            cout << col << " ";
        }
        cout << endl;
    }
}