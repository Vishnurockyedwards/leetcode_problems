/*
problem: move zeros
patter: sliding window


*/
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()<=1){
            return;
        }
        int n = nums.size();
        // int z =0, n = 1;
        // while(z<nums.size() && n<nums.size()&& z<n){
        //     while(z<nums.size() && nums[z]!=0){
        //         z++;
        //     }
        //     if(n<z){
        //         n = z+1;
        //     }
        //     while(n<nums.size() && nums[n]==0){
        //         n++;
        //     }
        //     if(n <= z || n>=nums.size() || z>nums.size()){
        //         return;
        //     }
        //     iter_swap(nums.begin()+z, nums.begin()+n);
        int l = 0;
        for(int r= 0 ; r<n;r++){
            if (nums[r] != 0){
                swap(nums[l],nums[r]);
                l = l+1;
            }
        }

        
    }
};