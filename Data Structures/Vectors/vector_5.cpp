#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(6);
    vec.push_back(4);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(9);
    vec.push_back(12);

    // Count of 2 in 'vec' vector
    int countValue = count(vec.begin(), vec.end(), 2);
    cout << "The number of twos in the vector is: " << countValue << endl;
    
    // Maximum Element in the Vector.
    auto maxElement = max_element(vec.begin(), vec.end());
    cout << "The Maximum Element is: " << *maxElement << endl;

    // Minimum Element in the Vector.
    auto minElement = min_element(vec.begin(), vec.end());
    cout << "The Minimum Element is: " << *minElement << endl;

    return 0;
}
