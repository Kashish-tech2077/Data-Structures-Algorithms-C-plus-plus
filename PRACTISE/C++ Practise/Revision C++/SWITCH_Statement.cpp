#include <iostream>
using namespace std;

int main()
{

    // SWITCH Statement Program(Of Days).
    int Days;
    cout << "Enter Day Name: ";
    cin >> Days;

    switch (Days)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Please Enter Number from 1 to 7 Only.";
        break;
    }
}