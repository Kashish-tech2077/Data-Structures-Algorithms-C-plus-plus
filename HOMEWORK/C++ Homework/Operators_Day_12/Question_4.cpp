#include <iostream>
using namespace std;

int main(){
    // HomeWork Question- 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.
    
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // Which is greatest a or b or c???
    if(a > b && a > c){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}