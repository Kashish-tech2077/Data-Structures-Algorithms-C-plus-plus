#include <iostream>
using namespace std;

int main()
{
    // Segregate 0 and 1 -> Time Complexity O(n).
    int arr[1000];
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the Elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Given Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int count_0 = 0, count_1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        count_0 ++;
        else
        count_1 ++;
    }
    for(int i = 0; i < count_0; i++)
    arr[i] = 0;

    for(int i = count_0; i < n; i++)
    arr[i] = 1;

    cout << "Segregated Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}