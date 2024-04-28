#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Delete the value from the vector.
    vector<int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(12);
    v.push_back(15);

    // Pop the Value
    v.pop_back();

    // cout << "v size: " << v.size() << endl;
    // cout << "v capacity: " << v.capacity() << endl;

    //Remove the Element of 1st Index.
    
    v.erase(v.begin() + 1);
    // cout << "After popping the Element at 1st Index.";
    // cout << "v size: " << v.size() << endl;
    // cout << "v capacity: " << v.capacity() << endl;

    //Printing the Element of Vector.
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;
    //Inserting a NEW Element in the Vector.

    v.insert(v.begin() + 1, 50); //Insert the New Value.
    cout << "After Inserting the new element" << endl;
     for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;
    cout << "After the Clearing the Elements of the Array." << endl;
    v.clear(); //Clear all the Elements of the Vector.
    cout << "v size: " << v.size() << endl;
    cout << "v capacity: " << v.capacity() << endl;

}