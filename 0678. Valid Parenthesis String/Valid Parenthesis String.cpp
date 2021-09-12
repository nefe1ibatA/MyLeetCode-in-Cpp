class Solution {
public:
    bool checkValidString(string s) {
        int len = s.length();
        int l = 0, r = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] == '*') {
                l++;
                r = max(r - 1, 0);
            }
            else if (s[i] == '(') {
                l++;
                r++;
            }
            else if (s[i] == ')') {
                l--;
                r = max(r - 1, 0);
            }
            if (l < 0) return false;
        }
        return r == 0;
    }
};