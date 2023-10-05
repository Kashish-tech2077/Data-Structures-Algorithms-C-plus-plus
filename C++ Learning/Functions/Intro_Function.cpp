#include <iostream>
using namespace std;

// Program to Sum of a and b using Function
int Sum(int p,int q) // Declaring The Function Sum
{
    int ans = p + q;  //  Defining The Function Sum
    return ans;    
}
int main()
{
    // Function Tutorial
    int a, b;
    cout << "Enter a: " << endl;
    cin >> a ;
    cout << "Enter b: " << endl;
    cin >> b ;

    // Function Call
    cout << "Answer is: " << Sum(a, b);
    // int ans = Sum(a, b)
    // cout << ans;  //Can Also Write in this way
}