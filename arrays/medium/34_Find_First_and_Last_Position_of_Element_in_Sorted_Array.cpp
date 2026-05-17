/*
problem : 34. Find First and Last Position of Element in Sorted Array
pattern : using two different binary search
*/
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {findFirst(nums, target), findLast(nums, target)};
    }
    
    int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, index = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                if (nums[mid] == target) index = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return index;
    }

    int findLast(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, index = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] <= target) {
                if (nums[mid] == target) index = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return index;
    }

    
};
