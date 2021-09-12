class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = height.size();
        int l = 0, r = s - 1;
        int ans = 0;
        int tmp = 0;
        while (l != r) {
            ans = max(ans, (r - l) * min(height[l], height[r]));
            if (height[l] > height[r]) {
                tmp = height[r--];
                while (tmp >= height[r] && l < r) {
                    r--;
                }
            }
            else if (height[r] >= height[l]) {
                tmp = height[l++];
                while (tmp >= height[l] && l < r){    
                    l++;
                }
            }
        }
        return ans;
    }
};