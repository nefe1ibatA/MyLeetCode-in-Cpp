class Solution {
public:
    int reverse(int x) {
        int next;
        int ans = 0;
        while (x) {           
            if (ans < INT_MIN / 10 || ans > INT_MAX / 10)
                return 0;
            next = x % 10;
            x /= 10;
            ans = ans * 10 + next;
        }
        return ans;
    }
};