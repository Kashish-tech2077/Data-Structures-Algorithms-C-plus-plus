#include <bits/stdc++.h>
using namespace std;
// Question 6: Find the third smallest element in an array of unique elements size n. Where n>3.

int findThirdSmallest(int arr[], int size) {
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int min3 = INT_MAX;

    for(int i = 0; i < size; i++) {
        if(arr[i] < min1) {
            min3 = min2;
            min2 = min1;
            min1 = arr[i];
        } else if(arr[i] < min2 && arr[i] != min1) {
            min3 = min2;
            min2 = arr[i];
        } else if(arr[i] < min3 && arr[i] != min2 && arr[i] != min1) {
            min3 = arr[i];
        }
    }

    return min3;
}

int main() {
    int n;
    cout << "Enter the size of the array (n > 3): ";
    cin >> n;

    if (n <= 3) {
        cout << "Please enter a size greater than 3." << endl;
        return 1;
    }

    int myArray[n];
    cout << "Enter " << n << " unique elements: ";
    for(int i = 0; i < n; i++) {
        cin >> myArray[i];
    }

    int thirdSmallest = findThirdSmallest(myArray, n);

    if (thirdSmallest != INT_MAX) {
        cout << "The third smallest element is: " << thirdSmallest << endl;
    } else {
        cout << "There is no third smallest element." << endl;
    }

    return 0;
}
