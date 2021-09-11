class Solution {
public:
    int myAtoi(string s) {
        int l = s.length();
        int ptr = 0;
        while (s[ptr] == ' ') {
            ptr++;
        }
        int flag;
        if (s[ptr] == '-') {
            flag = -1;
            ptr++;
        }
        else if (s[ptr] <= '9' && s[ptr] >= '0'){
            flag = 1;
        }
        else if (s[ptr] == '+') {
            flag = 1;
            ptr++;
        }
        else return 0;
        int ans = 0;
        int p = 1;
        if (flag == 1) {
            while (s[ptr] <= '9' && s[ptr] >= '0') {
                int digit = s[ptr++] - '0';
                if (ans > (INT_MAX - digit) / 10) {
                    return INT_MAX;
                }
                else ans = ans * 10 + digit;
            }
        }
        else if (flag == -1) {
            while (s[ptr] <= '9' && s[ptr] >= '0') {
                int digit = s[ptr++] - '0';
                if (ans < (INT_MIN + digit) / 10) {
                    return INT_MIN;
                }
                else ans = ans * 10 - digit;
            }
        }
        return ans;
    }
};