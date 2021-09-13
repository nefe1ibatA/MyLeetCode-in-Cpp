class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string ans = "";
        for (auto &p : dictionary) {
            int j = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == p[j]) {
                    j++;
                    if (j == p.length()) {
                        break;
                    }
                }
            }
            if (j == p.length()) {
                if (ans.length() < p.length()) {
                    ans = p;
                }
                else if (ans.length() == p.length() && ans > p){
                    ans = p;
                }
            }
        }
        return ans;
    }
};