#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create Vector, Declare
    vector<int> v;
    // Size and Capacity
    // cout << "Size of v: " << v.size() << endl;     // Size
    // cout << "Size of v: " << v.capacity() << endl; // Capacity

    // //Inserting Elements in the Vector.
    // v.push_back(3);
    // v.push_back(6);
    // v.push_back(9);
    // cout << "Size of v: " << v.size() << endl; //Size
    // cout << "Size of v: " << v.capacity() << endl;  //Capacity

    // Second Vector -> v1;
    vector<int> v1(5, 1);
    // Update Value
    v1[2] = 4;

    cout << "Size of v1: " << v1.size() << endl;
    cout << "Size of v1: " << v1.capacity() << endl;

    v1.push_back(12);
    cout << "After push_back the value" << endl;
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Size of v1: " << v1.capacity() << endl;
}