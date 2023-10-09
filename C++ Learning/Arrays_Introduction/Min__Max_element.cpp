#include <bits/stdc++.h>
using namespace std;

// Concept of minimum and maximum element in an Array
int main()
{
    // Minimum element in an array
    int arr[10] = {3, 6, 31, 274, 53, 63, 233, 32, 33, 8};
    int ans = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    cout << "Minimum Value: " << ans << endl;

    // Maximum element in an array
    ans = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << "Maximum Value: " << ans << endl;

}
