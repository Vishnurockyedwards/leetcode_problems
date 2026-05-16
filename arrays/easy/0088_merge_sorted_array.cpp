/*
problem: merge sorted array
pattern: two pointers
*/

#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;           // Last element in nums1's real part
        int j = n - 1;           // Last element in nums2 wala part
        int k = m + n - 1;       // Last position in nums1 (including 0s) m+n-1

        // Merge backwards
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If anything is left in nums2
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

        // No need to handle nums1 leftovers; they’re already in place
    }
};
