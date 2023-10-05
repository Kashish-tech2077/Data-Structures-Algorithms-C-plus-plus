#include <iostream>
using namespace std;

// Question- 5: Print “Hello Coder Army” n times using Function.

// Function to Print
int Print(int &n)
{
    int i = 1;
    while(i <= n)
    {
        cout << "Hello Coder Army" << endl;
        i++;
    }
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << Print(n);
}