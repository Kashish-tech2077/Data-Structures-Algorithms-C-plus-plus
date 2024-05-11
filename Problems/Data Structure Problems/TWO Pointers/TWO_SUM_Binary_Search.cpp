#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>& arr, int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 7, 11, 15, 27};
    vector<int> ans;

    sort(arr.begin(), arr.end()); // Sort the array

    int target = 22;
    for (int i = 0; i < arr.size(); i++) {
        int X = target - arr[i];
        int index = binarySearch(arr, 0, arr.size() - 1, X);
        if (index != -1 && index != i) { // Check if X exists and is not the same element
            ans.push_back(arr[i]);
            ans.push_back(arr[index]);
            break;
        }
    }
    cout << "ANSWER: " ;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}
