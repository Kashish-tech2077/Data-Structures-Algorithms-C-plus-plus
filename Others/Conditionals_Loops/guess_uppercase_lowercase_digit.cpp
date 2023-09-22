#include<iostream>
using namespace std;

int main(){
    char a;
    cin >> a;
    // 'A' is 65
    // 'a' is 97
    // 'O' is 48

    // Home_Work Question
    
    if(a>= 'A' && a<= 'Z'){
        cout << "This is Upper Case" <<endl;
    }
    else if(a>= 'a' && a <= 'z'){
        cout << "This is lower case" <<endl;
    }
    else if(a>= '0' && a<= '9'){
        cout << "This is digit" << endl;
    }
    return 0;
}