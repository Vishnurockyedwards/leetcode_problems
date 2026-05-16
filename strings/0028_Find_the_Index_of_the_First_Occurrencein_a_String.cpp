#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();

        if (n == 0) return 0; // Edge case: empty needle is always found at index 0
        if (n > m) return -1; // Needle can't be longer than haystack

        for (int i = 0; i <= m - n; i++) {
            int j = 0;
            while (j < n && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == n) return i; // Found full match
        }

        return -1; // Not found
    }
};
