class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int ans = 0;
        for (auto &p : points) {
            unordered_map<int, int> m;
            for (auto &q : points) {
                int dis = (p[0] - q[0]) * (p[0] - q[0]) + (p[1] - q[1]) * (p[1] - q[1]);
                m[dis]++;
            }
            for (auto &[_, i] : m) {
                ans += i * (i - 1);
            }
        }
        return ans;
    }
};