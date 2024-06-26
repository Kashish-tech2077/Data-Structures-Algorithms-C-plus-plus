#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1, first = -1, last = -1, mid;
        // Finding the first occurence
        while(start <= end)
        {
            mid = start+(end-start)/2;

            if(nums[mid]== target){
                first = mid;
                end = mid-1;
            }
            else if(nums[mid] < target){
                start = mid+1;
            }
            else
            end = mid-1;
        }
        // Finding the last occurence
        start = 0, end = nums.size()-1;
        while(start <= end)
        {
            mid = start+(end-start)/2;

            if(nums[mid]== target){
                last = mid;
                start = mid+1;
            }
            else if(nums[mid] < target){
                start = mid+1;
            }
            else
            end = mid-1;
        }

        vector<int>searchRange(2);
        searchRange[0]= first;
        searchRange[1]= last;
        
        return searchRange;
    }
};