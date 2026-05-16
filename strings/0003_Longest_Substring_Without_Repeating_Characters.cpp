#include<unordered_map>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen; // stores the last index of characters
        int maxLen = 0;
        int start = 0; // start of current window

        for (int end = 0; end < s.length(); ++end) {
            char c = s[end];

            // If character is inside current window, move start to right of previous c
            if (lastSeen.count(c) && lastSeen[c] >= start) {
                start = lastSeen[c] + 1;
            }

            lastSeen[c] = end; // update last seen index of c
            maxLen = max(maxLen, end - start + 1); // update max length
        }

        return maxLen;
    }
};
