#include <iostream>
using namespace std;

int main()
{
    // Program to check whether the number is prime or not?
    int i, n;
    cout << "Enter the Number to Check: ";
    cin >> n;

    if(n < 2)
    {
        cout << "NOT PRIME because it is less than 2"; //Ignoring all the Negative Numbers.
        return 0;
    }
    else{
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                cout << "Number is NOT PRIME.";
                return 0;
            }  
        }

        cout << "NUMBER IS PRIME.";
        return 0;
    }

}