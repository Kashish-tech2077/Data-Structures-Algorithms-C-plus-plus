#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[5] ={25, 45, 5, 7, 37};
    // Finding Minimum Element.
    int ans = INT_MAX;

    for(int i = 0; i < 5; i++){
        if(arr[i] < ans){
            ans = arr[i];
        }
    }
    cout << "Minimum Element is: " << ans << endl;

    // Finding Maximum Element.
    int ans_2 = INT_MIN;

    for(int i = 0; i < 5; i++){
        if(arr[i] > ans_2){
            ans_2 = arr[i];
        }
    }
    cout << "Maximum Element is: " << ans_2;

    return 0;
}