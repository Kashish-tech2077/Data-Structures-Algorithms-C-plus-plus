   
    int arr[5] = {2, 3, 4, 5, 6};
    cout << "arr[0] = " << arr[0] << endl;
    cout << "arr[3] = " << arr[3] << endl;
    // cout << arr[9] << endl;  NOT POSSIBLE- Out of Reach.

    // Size of Array.
    cout << "Size of arr is: " << sizeof(arr) << endl;
    // Finding the number of elements in the array.
    cout << "Number of Elements in array: " << sizeof(arr)/sizeof(arr[0]);