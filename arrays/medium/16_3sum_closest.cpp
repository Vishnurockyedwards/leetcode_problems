/*
problem:3sum closest
*/
#include<vector>
#include<algorithm>
using namespace std;    
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1, right = n - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];

                // Update closest sum if needed
                if (abs(currentSum - target) < abs(closest - target)) {
                    closest = currentSum;
                }

                if (currentSum < target) {
                    left++;
                } else if (currentSum > target) {
                    right--;
                } else {
                    // Exact match
                    return target;
                }
            }
        }

        return closest;
    }
};
