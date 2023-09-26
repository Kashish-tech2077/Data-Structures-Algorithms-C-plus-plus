#include <iostream>
using namespace std;

int main()
{
    //Question-2: Second Pattern:

    // F G H I J K  
    // F G H I J K
    // F G H I J K
    // F G H I J K
    // F G H I J K

    int row;
    char col; //col is a character data type.

    for(row = 1; row <= 6; row++){
        for(col = 'F'; col <= 'K'; col++){
            cout << col << " "; 
        }
        cout << endl;
    }
}