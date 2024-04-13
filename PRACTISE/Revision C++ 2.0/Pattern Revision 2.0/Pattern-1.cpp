#include <iostream>
using namespace std;

int main(){
    // First Rectangle Star * Pattern
    
    int row, col;  //row are horizontal stars and col are vertical stars
    for(int row = 1;row <= 5; row++)
    {
        for(int col =1; col <= 5; col++)
        {
            cout << "*" << " ";
        }
        cout << endl; 
    }
    return 0;
}