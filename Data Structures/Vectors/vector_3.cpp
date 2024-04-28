#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(9);
    arr.push_back(12);

    // Printing the First Element of the Array.
    cout << "First Element is: " << arr.front() << endl;
    // ------------------ or -------------------------
    cout << "First Element is: " << arr[0] << endl;

    // Printing the Last Element of the Array.
    cout << "Last Element is: " << arr.back() << endl;
    // ------------------ or -------------------------
    cout << "Last Element is: " << arr[arr.size()-1] << endl;

    vector <int> a;
    // Copy value of 1 vector to another.
    a = arr;
    cout << a.size() << endl;

    // Printing the Vector in 2nd Type.
    cout << "Printing the Element in 2nd Type: ";
    for(auto i: arr)
    cout << i << " ";

}