/*
problem:Remove Duplicates from Sorted Array
pattern: two pointer approach
*/
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0; // pointer for the last unique element
        for (int j = 1; j < nums.size(); ++j) {
            if (nums[j] != nums[i]) {//agar i and j position pe value same hai towe should go till next unequal element 
                i++;
                nums[i] = nums[j]; // Place the new unique element
            }
        }

        return i + 1; // k = number of unique elements
    }
};
