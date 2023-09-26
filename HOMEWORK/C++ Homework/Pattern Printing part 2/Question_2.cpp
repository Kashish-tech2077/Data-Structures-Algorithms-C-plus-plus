#include <iostream>
using namespace std;

int main(){
    // Question 2- Second Pattern:
       
    //   A
    //   A B
    //   A B C
    //   A B C D
    //   A B C D E


    int row, col;
    char ch;

    for(row = 1; row <= 6; row++){
        for(col=1; col <= row; col++){
            ch = 'A'+(col-1);
            cout << ch << " ";
        }
        cout << endl;
    }
}