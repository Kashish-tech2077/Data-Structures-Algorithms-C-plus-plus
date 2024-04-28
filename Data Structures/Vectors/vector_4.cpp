#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> ans;
    ans.push_back(5);
    ans.push_back(105);
    ans.push_back(65);
    ans.push_back(75);
    ans.push_back(94);

    // Sort the Vector in Increasing Order.
    // sort(ans.begin(), ans.end());
    // cout << "Increasing Order Sorted Vector: ";
    // for(int i = 0; i < ans.size(); i++)
    // cout << ans[i] << " " ;
    // cout << endl;

    // Sort the Vector in Decreasing Order.
    // sort(ans.begin(), ans.end(), greater <int>());
    // cout << "Decreasing Order Sorted Vector: ";
    // for(int i = 0; i < ans.size(); i++)
    // cout << ans[i] << " " ;
    // cout << endl;

    // // ----------------------> OR <---------------------------
    // sort(ans.rbegin(), ans.rend());
    // cout << "2nd Way Decreasing Order Sorted Vector: ";
    // for(int i = 0; i < ans.size(); i++)
    // cout << ans[i] << " " ;
    // cout << endl;

    //Search in Binary Search
    cout << binary_search(ans.begin(), ans.end(), 200)<< endl;

    //Finding the Index of Element. (Index of 75 is 3)
    cout << find(ans.begin(), ans.end(), 75) - ans.begin() << endl;
}