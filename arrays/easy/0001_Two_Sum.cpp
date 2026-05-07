/*
Problem: Two Sum
Pattern: HashMap

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* solution using plane vector
        vector<int> result;
        for(auto it1 = nums.begin(); it1 != nums.end(); ++it1){
            auto it2 = find(it1+1,nums.end(),target-*it1);
            if(it2 != nums.end()){//fiund the required number
                result.push_back(it1-nums.begin());
                result.push_back(it2-nums.begin());
                break;
            }
        }    
        return result;
        */
        unordered_map<int,int> _map;//solution using maps
        for(int i = 0; i<nums.size();i++){
            int num=nums[i];
            int complement = target - num;
            auto it = _map.find(complement);
            if(it!= _map.end()){//found
                return {it->second, i};
            }
            _map[num] = i;
        }
        return{};
    }
};