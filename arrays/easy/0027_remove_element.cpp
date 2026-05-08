/*
problem:Remove elements
pattern: two pointer approach
*/
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer for placement of non-val elements

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move non-val to the front
                k++;
            }
        }

        return k; // Number of elements not equal to val
    }
};