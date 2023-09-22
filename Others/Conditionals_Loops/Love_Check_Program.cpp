#include <iostream>
using namespace std;

int main(){

    // Know How much you LOVE SomeOne

    int love;
    cout << "Enter Your LOVE Value to check how much you LOVE Someone: ";
    cin >> love;

    if(love <= 10){
        cout << "There is NO LOVE " << endl;
    }
    else if(love <= 50 && love > 10){
        cout << "This is little LOVE" << endl;
    }
    else if(love > 50 && love <= 70){
        cout << "This is OK OK LOVE" << endl;
    }
    else if(love > 70 && love <= 84){
        cout << "This is Lovelier " << endl;
    }
    else if(love > 84 && love < 100){
        cout << "This is MORE Lovelier " << endl;
    }
    else if(love == 100){
        cout << "This is the Loveliest" << endl;
    }
    else if(love > 100){
        cout << "This is Extreme LOVE" << endl;
    }
    else{
        cout << "I Don't Know about LOVE" << endl;
    }
    return 0;
}