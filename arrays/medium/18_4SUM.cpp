/*
problem: 4sum
*/

#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            // Skip duplicates for first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n; j++) {
                // Skip duplicates for second element
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int left = j + 1, right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[left] + nums[right];

                    if (sum < newTarget) {
                        left++;
                    } else if (sum > newTarget) {
                        right--;
                    } else {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});

                        // Skip duplicates for third element
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        // Skip duplicates for fourth element
                        while (left < right && nums[right] == nums[right - 1]) right--;

                        left++;
                        right--;
                    }
                }
            }
        }
        return result;
    }
};