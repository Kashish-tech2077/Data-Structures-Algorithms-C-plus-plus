#include <iostream>
using namespace std;

int main()
{
    // Question 2: Calculate the average of elements in an array of size 18.
    int arr[18];
    for(int i = 0; i < 18; i++)
    {
        cin >> arr[i];
    }
    // Average 
    int average;
    int sum = 0;
    for(int i = 0; i < 18; i++)
    {
        sum = sum + arr[i];
    }
    average = sum/18;
    cout << "Average is: " << average << endl;

}