/*
problem: move zeros
patter: two pointer
*/
#include <vector>;
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;
        int idx = n - 1;//starting from last index as the greatest element would be put there

        while (left <= right) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];

            if (leftSq > rightSq) {// jo bada hoga wo last me jayega 😘
                result[idx--] = leftSq;
                left++;
            } else {
                result[idx--] = rightSq;
                right--;
            }
        }
        return result;
    }
};
