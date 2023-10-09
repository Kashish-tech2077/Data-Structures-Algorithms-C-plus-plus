#include <iostream>
using namespace std;

// Question 3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

int findElementIndex(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int myArray[size];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> myArray[i];
    }

    int targetElement;
    cout << "Enter the element to search for: ";
    cin >> targetElement;

    int index = findElementIndex(myArray, size, targetElement);

    if (index != -1) {
        cout << "The element " << targetElement << " is present at index " << index << "." << endl;
    } else {
        cout << "The element " << targetElement << " is not present in the array." << endl;
    }

    return 0;
}
