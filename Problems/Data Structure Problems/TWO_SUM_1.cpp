#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> arr;
    vector <int> ans; //The answer will be stored in this vector(ans).
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(11);
    arr.push_back(15);
    arr.push_back(27);

    int target = 22;
    cout << "TARGET: " << target <<endl; 
    for(int i = 0; i < arr.size()-1; i++)
    {
        for(int j = i+1; j < arr.size(); j++)
        {
            if(arr[i] + arr[j] == target)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                break; // Exit the inner loop once a pair is found
            }
        }
    }

    cout << "The TWO SUM Numbers are: ";
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
