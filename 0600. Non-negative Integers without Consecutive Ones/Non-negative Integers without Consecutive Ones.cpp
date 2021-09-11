class Solution {
public:
    int findIntegers(int n) {
        int dp[32];
        dp[0] = 1;
        dp[1] = 2;
        int k = 1;
        for (int i = 2; i < 32 && n > (1 << k++); i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        int ans = 0;
        int temp = 0;
        while (k >= 0) {
            if (n & (1 << k)) {
                ans += dp[k];
                if (temp == 1) return ans;
                temp = 1;
            }
            else temp = 0;
            k--;
        }
        return ans + 1;
    }
};