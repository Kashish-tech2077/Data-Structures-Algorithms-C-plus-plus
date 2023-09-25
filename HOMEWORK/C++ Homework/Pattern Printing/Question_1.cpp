#include <iostream>
using namespace std;

int main(){
    //Question-1: First Pattern:

    //    4 4 4 4 4 4
    //    4 4 4 4 4 4
    //    4 4 4 4 4 4  
    //    4 4 4 4 4 4
    //    4 4 4 4 4 4 
    
    int row, col;

    for(row = 1; row <= 6; row++){
        for(col = 1; col <= 6; col++){
            cout << "4" << " ";
        }
        cout << endl;
    }
}