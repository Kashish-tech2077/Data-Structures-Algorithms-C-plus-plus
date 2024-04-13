#include<iostream>
using namespace std;

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int start = 0, end = 7;
    cout << "Original Array: ";

    for(int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    while(start < end)
    {
        swap(arr[start], arr[end]); //Swaping the Array.
        start ++;
        end --;
    }
    
    cout << "Reverse Array: ";
    for(int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

}