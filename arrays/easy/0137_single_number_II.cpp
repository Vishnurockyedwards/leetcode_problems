/*
problem : single number
pattern : xor
*/
#include <vector>
#include <algorithm>
using namespace std;

/*class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        // check each bit position
        for (int i = 0; i < 32; ++i) {
            int bitCount = 0;

            for (int num : nums) {
                if (num  & (1<<i)) {
                    bitCount++;
                }
            }

            // if bit count % 3 is not 0, the unique number has this bit set
            if (bitCount % 3 != 0) {
                result |= (1 << i);
            }
        }

        return result;
    }
};
*///-------------------optimised case---------------
class Solution{
public:
    int singleNumber(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();

        for(int i=1;i<n;i=i+3){
            if(nums[i]!=nums[i-1]){
                return(nums[i-1]);
            }
        }
        return nums[n-1];
    }
};