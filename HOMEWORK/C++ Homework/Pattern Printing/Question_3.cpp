#include <iostream>
using namespace std;

int main()
{
    //Question-3: Third Pattern:
  
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216


    int row, col;

    for(row = 1; row <= 6; row++){
        for(col = 1; col <= 6; col++){
            cout << col*col*col << " "; //Printing cube
        }
        cout << endl;
    }
}