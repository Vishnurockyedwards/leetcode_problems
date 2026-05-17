// basically its a fibonaci series question
// ways[i] = ways[i-1] + ways[i-2] kyuki 2 hi option hai to reach i
class Solution {    
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int a = 1, b = 2, ways = 0;
        for (int i = 3; i <= n; ++i) {
            ways = a + b;
            a = b;
            b = ways;
        }
        return b;
    }
};
