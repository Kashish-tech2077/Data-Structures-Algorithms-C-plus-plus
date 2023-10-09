#include <iostream>
using namespace std;

int main()
{
    // Question 1: Take 20 elements from user input and find its sum with the help of an array.

    int arr[20];
    for(int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    // Sum of Elements 
    int sum = 0;
    for(int i = 0; i < 20; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum is: " << sum << endl;

}