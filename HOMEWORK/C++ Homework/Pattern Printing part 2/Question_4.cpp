#include <iostream>
using namespace std;

int main(){
    // Question 4- Fourth Pattern:
       
    //   A B C D
    //   A B C
    //   A B
    //   A

    int row, col;
    char ch;

    for(row = 4; row >= 1; row--){
        for(col = 1; col <= row; col++){
            ch = 'A'+(col-1);
            cout << ch << " ";
        }
        cout << endl;
    }
}