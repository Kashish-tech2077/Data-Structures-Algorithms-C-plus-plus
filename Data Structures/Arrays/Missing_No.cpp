#include <iostream>
using namespace std;

// Finding the Missing Number in given Array.
int main()
{
    // 1. Sum of all Element in the Array
    int array[6]= {1,2,3,4,5,6};
        int sum = 0;
        int n = 6;
        for(int i = 0; i <n-1; i++)
        sum += array[i];
        
        // Sum of n number;
        int ans;
        ans = n*(n+1)/2;
        cout << ans-sum;
}