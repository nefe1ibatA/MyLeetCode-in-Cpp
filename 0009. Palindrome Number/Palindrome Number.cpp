class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        else if (x == 0) {
            return true;
        }
        else {
            int tmp = x;
            int rev = 0;
            int digit;
            while (tmp) {
                digit = tmp % 10;
                if (rev > INT_MAX / 10) return false;
                rev = rev * 10 + digit;
                tmp /= 10;
            }
            if (rev == x) return true;
            else return false;
        }
    }
};