class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans[10];
        ans[0].push_back("");
        ans[1].push_back("()");
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                int k = i - 1 - j;
                for (auto p1 = ans[j].begin(); p1 != ans[j].end(); p1++) {
                    for (auto p2 = ans[k].begin(); p2 != ans[j].end(); p2++) {
                        ans[i].push_back("(" + (*p1) + ")" + (*p2));
                    }
                }
            }
        }
        return ans[n];
    }
};